// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGCONTACTSUGGESTION_H
#define SGCONTACTSUGGESTION_H

@class NSString;
@protocol CNContactViewControllerDelegate, SGContactSuggestionDelegate;


#import "SGContactSuggestionBase.h"

@interface SGContactSuggestion : SGContactSuggestionBase <CNContactViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SGContactSuggestionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)suggestionImage;
-(id)suggestionImageSGView;
-(id)suggestionPrimaryAction;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;


@end


#endif