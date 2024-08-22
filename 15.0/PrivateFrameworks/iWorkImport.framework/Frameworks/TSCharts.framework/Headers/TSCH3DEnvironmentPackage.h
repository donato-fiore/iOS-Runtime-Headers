// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DENVIRONMENTPACKAGE_H
#define TSCH3DENVIRONMENTPACKAGE_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCH3DEnvironmentPackage : NSObject <NSCopying>

 {
    NSArray *_materials;
}




+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(BOOL)hasCompleteData;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)materialCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)materialEnumerator;
-(void)addMaterial:(id)arg0 ;
-(void)affect:(id)arg0 states:(id)arg1 scene:(id)arg2 texturePool:(id)arg3 ;
-(void)didInitFromSOS;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif