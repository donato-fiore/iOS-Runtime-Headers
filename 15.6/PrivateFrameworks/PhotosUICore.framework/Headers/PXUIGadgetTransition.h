// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXUIGADGETTRANSITION_H
#define PXUIGADGETTRANSITION_H

@class NSString;
@protocol PXGadgetTransition, PXGridPresentation;

#import <Foundation/Foundation.h>

#import "PXOneUpPresentation.h"

@interface PXUIGadgetTransition : NSObject <PXGadgetTransition>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXGridPresentation> *gridPresentation; // ivar: _gridPresentation
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXOneUpPresentation *oneUpPresentation; // ivar: _oneUpPresentation
@property (readonly) Class superclass;


-(id)initWithOneUpPresentation:(id)arg0 gridPresentation:(id)arg1 ;


@end


#endif