// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFUIVIEWPOPOVERSOURCEINFO_H
#define _SFUIVIEWPOPOVERSOURCEINFO_H

@class UIView, UIBarButtonItem, NSString;
@protocol _SFPopoverSourceInfo;

#import <Foundation/Foundation.h>


@interface _SFUIViewPopoverSourceInfo : NSObject <_SFPopoverSourceInfo>

 {
    UIView *_view;
    UIEdgeInsets _insets;
}


@property (readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger permittedArrowDirections; // ivar: _permittedArrowDirections
@property (readonly, nonatomic) CGRect popoverSourceRect;
@property (readonly, nonatomic) UIView *popoverSourceView;
@property (nonatomic) NSInteger provenance; // ivar: _provenance
@property (readonly, nonatomic) BOOL shouldDismissIfSourceRemovedAfterRepositioning;
@property (nonatomic) BOOL shouldHideArrow; // ivar: _shouldHideArrow
@property (nonatomic) BOOL shouldPassthroughSuperview; // ivar: _shouldPassthroughSuperview
@property (readonly) Class superclass;


-(id)initWithView:(id)arg0 ;
-(id)initWithView:(id)arg0 insets:(struct UIEdgeInsets )arg1 ;
-(id)initWithView:(id)arg0 rect:(struct CGRect )arg1 ;


@end


#endif