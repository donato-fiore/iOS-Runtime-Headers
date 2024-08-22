// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATMESSAGELINKLISTENER_H
#define ATMESSAGELINKLISTENER_H

@protocol ATMessageLinkListenerDelegate;

#import <Foundation/Foundation.h>


@interface ATMessageLinkListener : NSObject

@property (weak, nonatomic) NSObject<ATMessageLinkListenerDelegate> *delegate; // ivar: _delegate


-(BOOL)start;
-(void)stop;


@end


#endif