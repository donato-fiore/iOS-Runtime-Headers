// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSERVICEDETAILSTEXTVIEWDELEGATE_H
#define HUSERVICEDETAILSTEXTVIEWDELEGATE_H

@class NSString, UIViewController;
@protocol UITextViewDelegate;

#import <Foundation/Foundation.h>

#import "HUServiceDetailsItemManager.h"

@interface HUServiceDetailsTextViewDelegate : NSObject <UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HUServiceDetailsItemManager *itemManager; // ivar: _itemManager
@property (readonly) Class superclass;
@property (weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)privacyIdentifierForSectionIdentifier:(id)arg0 ;
-(id)unifiedIdentifiersForSectionIdentifier:(id)arg0 ;
-(void)dismissTextViewController;
-(void)displayPrivacyInformationWithIdentifier:(id)arg0 ;
-(void)displayUnifiedPrivacyInformationWithIdentifiers:(id)arg0 ;


@end


#endif