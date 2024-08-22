// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DLIGHTINGPACKAGE_H
#define TSCH3DLIGHTINGPACKAGE_H

@class NSArray, NSString;
@protocol TSSPropertyValueArchiving, NSCopying;

#import <Foundation/Foundation.h>


@interface TSCH3DLightingPackage : NSObject <TSSPropertyValueArchiving, NSCopying>

 {
    NSArray *_lights;
}


@property (readonly, copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *name; // ivar: _name


+(id)allNamedPackages;
+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)localizedNameForName:(id)arg0 ;
+(id)nameFromSageLightingPackageName:(id)arg0 ;
+(id)p_sageLightingPackageNames;
+(id)package;
+(id)packageFromName:(id)arg0 ;
+(id)packageWithSageLightingPackageData:(id)arg0 ;
+(id)sageNameFromLightingPackageName:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)addLight:(id)arg0 ;
-(void)affect:(id)arg0 states:(id)arg1 scene:(id)arg2 texturePool:(id)arg3 ;
-(void)didInitFromSOS;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif