// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSMOUSEPOINTERPERDISPLAYINFO_H
#define BKSMOUSEPOINTERPERDISPLAYINFO_H

@class BSCompoundAssertion, NSSet;

#import <Foundation/Foundation.h>


@interface BKSMousePointerPerDisplayInfo : NSObject

@property (retain, nonatomic) BSCompoundAssertion *globalEventsAssertion; // ivar: _globalEventsAssertion
@property (retain, nonatomic) BSCompoundAssertion *pointerSuppressionAssertion; // ivar: _pointerSuppressionAssertion
@property (retain, nonatomic) NSSet *previouslyRoutedContextIDs; // ivar: _previouslyRoutedContextIDs




@end


#endif