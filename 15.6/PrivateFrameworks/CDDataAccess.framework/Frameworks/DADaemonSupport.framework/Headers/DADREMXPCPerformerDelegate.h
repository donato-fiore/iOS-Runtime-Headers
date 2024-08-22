// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DADREMXPCPERFORMERDELEGATE_H
#define DADREMXPCPERFORMERDELEGATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DADREMXPCPerformerDelegate : NSObject

@property (retain, nonatomic) NSString *accountID; // ivar: _accountID
@property (retain, nonatomic) NSString *delegateID; // ivar: _delegateID
@property (nonatomic) BOOL finished; // ivar: _finished
@property (copy, nonatomic) id *remXPCCompletion; // ivar: _remXPCCompletion


-(id)initWithAccountID:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;


@end


#endif