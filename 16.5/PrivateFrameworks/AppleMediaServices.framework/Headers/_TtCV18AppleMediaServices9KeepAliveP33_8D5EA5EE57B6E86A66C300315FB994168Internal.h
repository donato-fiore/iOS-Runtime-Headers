// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCV18APPLEMEDIASERVICES9KEEPALIVEP33_8D5EA5EE57B6E86A66C300315FB994168INTERNAL_H
#define _TTCV18APPLEMEDIASERVICES9KEEPALIVEP33_8D5EA5EE57B6E86A66C300315FB994168INTERNAL_H

@protocol RBSAssertionObserving;

#import <Foundation/Foundation.h>


@interface _TtCV18AppleMediaServices9KeepAliveP33_8D5EA5EE57B6E86A66C300315FB994168Internal : NSObject <RBSAssertionObserving>

 {
    ? logKey;
    ? identifier;
    ? transaction;
    ? assertion;
    ? signpostID;
    ? signpostIntervalState;
}




-(id)init;
-(void)assertion:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)assertionWillInvalidate:(id)arg0 ;
-(void)dealloc;


@end


#endif