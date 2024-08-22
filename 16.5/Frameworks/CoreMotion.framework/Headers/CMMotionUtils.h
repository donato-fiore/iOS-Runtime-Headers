// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMMOTIONUTILS_H
#define CMMOTIONUTILS_H


#import <Foundation/Foundation.h>


@interface CMMotionUtils : NSObject



+(BOOL)featureAvailability:(char *)arg0 ;
+(BOOL)hasEntitlement:(id)arg0 ;
+(BOOL)isMotionActivityEntitled;
+(NSInteger)authorizationStatus;
+(NSInteger)isAuthorizedForEntitlement:(id)arg0 ;
+(NSUInteger)copyDataFrom:(id)arg0 to:(id)arg1 ;
+(id)fileHandleForWritingToURL:(id)arg0 ;
+(id)getExecutablePathFromPid:(int)arg0 ;
+(id)logDirectory;
+(id)sendMessage:(struct shared_ptr<CLConnectionMessage> )arg0 withReplyClassesSync:(id)arg1 ;
+(struct shared_ptr<CLConnectionMessage> )sendMessageSync:(struct shared_ptr<CLConnectionMessage> )arg0 ;
+(void)sendMessage:(struct shared_ptr<CLConnectionMessage> )arg0 withReplyClasses:(id)arg1 callback:(id)arg2 ;
+(void)tccServiceMotionAccessWithBlock:(id)arg0 ;
+(void)tccServiceMotionAccessWithLabel:(id)arg0 ;


@end


#endif