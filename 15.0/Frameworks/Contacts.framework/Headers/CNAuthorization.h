// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAUTHORIZATION_H
#define CNAUTHORIZATION_H


#import <Foundation/Foundation.h>


@interface CNAuthorization : NSObject



+(BOOL)isAccessRestrictedForEntityType:(NSInteger)arg0 ;
+(BOOL)requestAccessForEntityType:(NSInteger)arg0 error:(*id)arg1 ;
+(NSInteger)authorizationStatusForEntityType:(NSInteger)arg0 ;
+(id)logger;
+(void)requestAccessForEntityType:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif