// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENERROR_H
#define ENERROR_H


#import <Foundation/Foundation.h>


@interface ENError : NSObject



+(NSInteger)sanitizedErrorCodeFromEDAMErrorCode:(int)arg0 ;
+(id)connectionFailedError;
+(id)errorFromException:(id)arg0 ;
+(id)localizedDescriptionForENErrorCode:(NSInteger)arg0 ;
+(id)noteSizeLimitReachedError;


@end


#endif