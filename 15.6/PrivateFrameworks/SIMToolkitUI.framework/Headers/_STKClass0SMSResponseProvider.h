// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _STKCLASS0SMSRESPONSEPROVIDER_H
#define _STKCLASS0SMSRESPONSEPROVIDER_H

@class NSString;
@protocol STKAlertSessionResponseProvider, OS_os_log;

#import <Foundation/Foundation.h>


@interface _STKClass0SMSResponseProvider : NSObject <STKAlertSessionResponseProvider>

 {
    NSObject<OS_os_log> *_logger;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSentResponse;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *logger;
@property (readonly) Class superclass;


-(id)initWithLogger:(id)arg0 ;
-(void)sendResponse:(NSInteger)arg0 ;
-(void)sendResponse:(NSInteger)arg0 withStringResult:(id)arg1 ;


@end


#endif