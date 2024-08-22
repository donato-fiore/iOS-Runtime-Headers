// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRURLSESSIONDELEGATE_H
#define CRURLSESSIONDELEGATE_H

@class NSString;
@protocol NSURLSessionDelegate;

#import <Foundation/Foundation.h>


@interface CRURLSessionDelegate : NSObject <NSURLSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)trustIsValidWithProtectionSpace:(id)arg0 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif