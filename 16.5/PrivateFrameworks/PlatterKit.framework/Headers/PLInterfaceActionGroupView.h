// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLINTERFACEACTIONGROUPVIEW_H
#define PLINTERFACEACTIONGROUPVIEW_H

@class UIView, UIInterfaceActionGroupView, NSMutableDictionary, NSArray, NSString;
@protocol MTVisualStylingProviderObservingPrivate, MTVisualStylingRequiring;



@interface PLInterfaceActionGroupView : UIView <MTVisualStylingProviderObservingPrivate, MTVisualStylingRequiring>

 {
    UIInterfaceActionGroupView *_actionsGroupView;
    BOOL _actionsDirty;
    NSMutableDictionary *_categoriesToProviders;
}


@property (retain, nonatomic) NSArray *actions;
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;


+(void)initialize;
-(id)_newInterfaceActionGroupViewWithActions:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateStylingOfInterfaceActionGroupView:(id)arg0 ;
-(void)layoutSubviews;
-(void)providedStylesDidChangeForProvider:(id)arg0 ;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif