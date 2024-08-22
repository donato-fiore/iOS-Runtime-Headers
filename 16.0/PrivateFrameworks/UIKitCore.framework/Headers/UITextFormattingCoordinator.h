// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTFORMATTINGCOORDINATOR_H
#define UITEXTFORMATTINGCOORDINATOR_H

@class NSString;
@protocol UIFontPickerViewControllerDelegate, UITextFormattingCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface UITextFormattingCoordinator : NSObject <UIFontPickerViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UITextFormattingCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isFontPanelVisible;
+(id)textFormattingCoordinatorForWindowScene:(id)arg0 ;
+(void)toggleFontPanel:(id)arg0 ;
-(id)initWithWindowScene:(id)arg0 ;
-(void)fontPickerViewControllerDidPickFont:(id)arg0 ;
-(void)setSelectedAttributes:(id)arg0 isMultiple:(BOOL)arg1 ;
-(void)updateTextAttributesWithConversionHandler:(id)arg0 ;


@end


#endif