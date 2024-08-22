// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDMDECLARATIVEMANAGEMENT_H
#define MDMDECLARATIVEMANAGEMENT_H


#import <Foundation/Foundation.h>


@interface MDMDeclarativeManagement : NSObject



+(id)_createUnsupportedFeatureError;
+(void)executeRequestForEndpoint:(id)arg0 channelType:(NSUInteger)arg1 requestData:(id)arg2 completionHandler:(id)arg3 ;
+(void)fetchDataAtURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif