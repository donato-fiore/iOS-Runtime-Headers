// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMESSAGESEXTENSIONVIEWMODEL_H
#define PXMESSAGESEXTENSIONVIEWMODEL_H

@class NSString, UIViewController, NSArray, NSDate, NSURL;
@protocol PXMutableMessagesExtensionViewModel, PXCMMSuggestion;


#import "PXObservable.h"

@interface PXMessagesExtensionViewModel : PXObservable <PXMutableMessagesExtensionViewModel>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDrawerActive) BOOL drawerActive; // ivar: _drawerActive
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (readonly, copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly, nonatomic) NSUInteger selectedActivityType; // ivar: _selectedActivityType
@property (readonly, nonatomic) NSDate *selectedMessageDate; // ivar: _selectedMessageDate
@property (readonly, copy, nonatomic) NSString *selectedMessageText; // ivar: _selectedMessageText
@property (readonly, nonatomic) NSObject<PXCMMSuggestion> *selectedSuggestion; // ivar: _selectedSuggestion
@property (readonly, nonatomic) NSURL *selectedURL; // ivar: _selectedURL
@property (readonly) Class superclass;


+(id)sharedRootViewModel;
-(id)mutableChangeObject;
-(void)clearSelection;
-(void)performChanges:(id)arg0 ;


@end


#endif