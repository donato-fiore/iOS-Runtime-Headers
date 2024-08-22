// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFBLOCKBASEDPOPOVERSOURCEINFO_H
#define SFBLOCKBASEDPOPOVERSOURCEINFO_H

@class UIBarButtonItem, NSString, UIView;
@protocol _SFPopoverSourceInfo;

#import <Foundation/Foundation.h>


@interface SFBlockBasedPopoverSourceInfo : NSObject <_SFPopoverSourceInfo>

 {
    id *_sourceInfoProvider;
}


@property (readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger permittedArrowDirections;
@property (readonly, nonatomic) CGRect popoverSourceRect;
@property (readonly, nonatomic) UIView *popoverSourceView;
@property (nonatomic) NSInteger provenance;
@property (readonly, nonatomic) BOOL shouldDismissIfSourceRemovedAfterRepositioning;
@property (nonatomic) BOOL shouldHideArrow;
@property (nonatomic) BOOL shouldPassthroughSuperview;
@property (readonly) Class superclass;


-(id)initWithSourceInfoProvider:(id)arg0 ;


@end


#endif