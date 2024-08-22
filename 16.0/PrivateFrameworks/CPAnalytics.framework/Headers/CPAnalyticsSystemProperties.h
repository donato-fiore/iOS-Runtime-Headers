// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPANALYTICSSYSTEMPROPERTIES_H
#define CPANALYTICSSYSTEMPROPERTIES_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CPAnalyticsSystemProperties : NSObject

@property (retain, nonatomic) NSMutableDictionary *dynamicProperties; // ivar: _dynamicProperties
@property (retain, nonatomic) NSMutableDictionary *systemProperties; // ivar: _systemProperties


+(id)dynamicPhotoLibraryProperties;
+(id)staticPhotoLibraryProperties;
-(id)init;
-(id)propertyForKey:(id)arg0 forEventName:(id)arg1 payloadForSystemPropertyExtraction:(id)arg2 ;
-(void)addDynamicProperty:(id)arg0 withProvider:(id)arg1 ;
-(void)addProperty:(id)arg0 withValue:(id)arg1 ;
-(void)removePhotoLibraryProperties;


@end


#endif