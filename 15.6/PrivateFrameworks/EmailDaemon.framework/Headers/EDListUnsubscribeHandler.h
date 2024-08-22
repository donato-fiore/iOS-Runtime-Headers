// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDLISTUNSUBSCRIBEHANDLER_H
#define EDLISTUNSUBSCRIBEHANDLER_H


#import <Foundation/Foundation.h>


@interface EDListUnsubscribeHandler : NSObject



+(id)log;
-(void)ignoreWithCommand:(id)arg0 completion:(id)arg1 ;
-(void)unsubscribeHTMLWithCommand:(id)arg0 timeout:(CGFloat)arg1 completion:(id)arg2 ;
-(void)unsubscribeMailtoWithCommand:(id)arg0 completion:(id)arg1 ;


@end


#endif