// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CESRUAAPDATA_H
#define CESRUAAPDATA_H


#import <Foundation/Foundation.h>


@interface CESRUaapData : NSObject



+(BOOL)removeUaapOovsForLanguage:(id)arg0 bundleId:(id)arg1 ;
+(BOOL)writeUaapOovsForLanguage:(id)arg0 bundleId:(id)arg1 customProns:(id)arg2 newOovs:(id)arg3 error:(*id)arg4 ;
+(id)readUaapOovsForLanguage:(id)arg0 ;


@end


#endif