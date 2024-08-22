// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBINSTRUMENTCLUSTERURLHANDLER_H
#define DBINSTRUMENTCLUSTERURLHANDLER_H


#import <Foundation/Foundation.h>


@interface DBInstrumentClusterURLHandler : NSObject



+(BOOL)_isMapsClusterURL:(id)arg0 ;
+(BOOL)isURLSupported:(id)arg0 ;
+(NSUInteger)_clusterSettingForURLValue:(id)arg0 ;
+(NSUInteger)_layoutSettingForURLValue:(id)arg0 ;
+(id)_correctedComponentsForURL:(id)arg0 ;
+(void)applySettingsForClusterURL:(id)arg0 toSceneSettings:(id)arg1 ;


@end


#endif