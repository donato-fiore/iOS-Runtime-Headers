// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKRBSASSERTIONDELEGATE_H
#define WKRBSASSERTIONDELEGATE_H

@class NSString;
@protocol RBSAssertionObserving;

#import <Foundation/Foundation.h>


@interface WKRBSAssertionDelegate : NSObject <RBSAssertionObserving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) id *invalidationCallback; // ivar: _invalidationCallback
@property (copy) id *prepareForInvalidationCallback; // ivar: _prepareForInvalidationCallback
@property (readonly) Class superclass;


-(void)assertion:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)assertionWillInvalidate:(id)arg0 ;
-(void)dealloc;


@end


#endif