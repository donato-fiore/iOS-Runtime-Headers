// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISTORYBOARDPOPOVERPRESENTATIONSEGUETEMPLATE_H
#define UISTORYBOARDPOPOVERPRESENTATIONSEGUETEMPLATE_H

@class NSArray;


#import "UIStoryboardSegueTemplate.h"
#import "UIBarButtonItem.h"
#import "UIView.h"

@interface UIStoryboardPopoverPresentationSegueTemplate : UIStoryboardSegueTemplate

@property (retain, nonatomic) UIBarButtonItem *anchorBarButtonItem; // ivar: _anchorBarButtonItem
@property (retain, nonatomic) UIView *anchorView; // ivar: _anchorView
@property (copy, nonatomic) NSArray *passthroughViews; // ivar: _passthroughViews
@property (nonatomic) NSUInteger permittedArrowDirections; // ivar: _permittedArrowDirections


-(id)initWithCoder:(id)arg0 ;
-(id)newDefaultPerformHandlerForSegue:(SEL)arg0 ;
-(id)newDefaultPrepareHandlerForSegue:(SEL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif