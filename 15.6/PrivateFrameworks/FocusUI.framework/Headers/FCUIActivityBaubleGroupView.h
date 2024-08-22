// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCUIACTIVITYBAUBLEGROUPVIEW_H
#define FCUIACTIVITYBAUBLEGROUPVIEW_H

@class UIView, NSArray, NSString;
@protocol FCUIContentSizeCategoryAdjusting;



@interface FCUIActivityBaubleGroupView : UIView <FCUIContentSizeCategoryAdjusting>

 {
    NSArray *_baubleViews;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, nonatomic) NSInteger baubleGroupType; // ivar: _baubleGroupType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly) Class superclass;


-(BOOL)adjustForContentSizeCategoryChange;
-(id)initWithBaubleDescriptions:(id)arg0 baubleGroupType:(NSInteger)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif