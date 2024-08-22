// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIACCESSORYVIEWCONTROLLER_H
#define SEARCHUIACCESSORYVIEWCONTROLLER_H

@class UIControl, NSString, UIView;
@protocol SearchUIDetailedRowComponent, SearchUIAccessoryViewDelegate, SearchUIFeedbackDelegate;

#import <Foundation/Foundation.h>

#import "SearchUIDetailedRowModel.h"

@interface SearchUIAccessoryViewController : NSObject <SearchUIDetailedRowComponent>



@property (retain, nonatomic) UIControl *control; // ivar: _control
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<SearchUIAccessoryViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<SearchUIFeedbackDelegate> *feedbackDelegate; // ivar: feedbackDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SearchUIDetailedRowModel *rowModel; // ivar: rowModel
@property (readonly) Class superclass;
@property (readonly) NSUInteger type;
@property (retain, nonatomic) UIView *view; // ivar: view


+(BOOL)supportsRowModel:(id)arg0 ;
+(Class)accessoryViewClassForRowModel:(id)arg0 ;
-(BOOL)containsSymbolImage;
-(BOOL)shouldTopAlignForAccessibilityContentSizes;
-(BOOL)shouldVerticallyCenter;
-(id)controlInView:(id)arg0 ;
-(id)init;
-(id)setupView;
-(void)buttonPressed;
-(void)didEngageAction:(NSUInteger)arg0 destination:(NSUInteger)arg1 ;
-(void)hide;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)updateWithContacts:(id)arg0 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif