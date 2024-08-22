// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSUGGESTLESSPEOPLEHELPER_H
#define PXSUGGESTLESSPEOPLEHELPER_H

@class NSString, NSUndoManager;
@protocol PXSuggestLessPeopleSelectionViewControllerDelegate, PXSuggestLessPeopleOptionSelectionViewControllerDelegate, PXSuggestLessPeopleHelperDelegate;

#import <Foundation/Foundation.h>


@interface PXSuggestLessPeopleHelper : NSObject <PXSuggestLessPeopleSelectionViewControllerDelegate, PXSuggestLessPeopleOptionSelectionViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXSuggestLessPeopleHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUndoManager *undoManager; // ivar: _undoManager


-(id)initWithUndoManager:(id)arg0 ;
-(void)_showSuggestLessOptionForPerson:(id)arg0 completionHandler:(id)arg1 ;
-(void)_showSuggestLessPeopleSelectionForPeople:(id)arg0 completionHandler:(id)arg1 ;
-(void)_suggestLessPeople:(id)arg0 withSuggestLessOption:(NSInteger)arg1 undoManager:(id)arg2 completionHandler:(id)arg3 ;
-(void)completeActionWithCompletionHandler:(id)arg0 ;
-(void)completeOptionSelectionActionWithCompletionHandler:(id)arg0 ;
-(void)didSelectPersonToSuggestLess:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(void)dismissOptionSelectionViewController:(id)arg0 completionHandler:(id)arg1 ;
-(void)dismissViewController:(id)arg0 completionHandler:(id)arg1 ;
-(void)suggestLessPeople:(id)arg0 completionHandler:(id)arg1 ;
-(void)suggestLessPeople:(id)arg0 withSuggestLessOption:(NSInteger)arg1 undoManager:(id)arg2 completionHandler:(id)arg3 ;
-(void)suggestLessPeopleFromAssets:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif