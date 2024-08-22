// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXUISETTINGSINSTRUCTIONSVIEW_H
#define AXUISETTINGSINSTRUCTIONSVIEW_H

@class UITableViewHeaderFooterView, PSSpecifier, UILabel, NSMutableArray, NSString, OBWelcomeController;
@protocol UITextViewDelegate, PSHeaderFooterView;



@interface AXUISettingsInstructionsView : UITableViewHeaderFooterView <UITextViewDelegate, PSHeaderFooterView>

 {
    PSSpecifier *_specifier;
    UILabel *_headerLabel;
    NSMutableArray *_contentLabels;
    NSMutableArray *_marginConstraints;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) OBWelcomeController *moreInfoController; // ivar: _moreInfoController
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(id)initWithSpecifier:(id)arg0 ;
-(id)settingsLocString:(id)arg0 table:(id)arg1 ;
-(void)_initializeContent;
-(void)doneButtonTapped:(id)arg0 ;
-(void)setNeedsLayout;


@end


#endif