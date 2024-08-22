// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSUGGESTLESSPEOPLEHELPER_H
#define PXSUGGESTLESSPEOPLEHELPER_H

@class NSString;
@protocol PXSuggestLessPeopleSelectionViewControllerDelegate, PXSuggestLessPeopleOptionSelectionViewControllerDelegate, PXSuggestLessPeopleHelperDelegate;

#import <Foundation/Foundation.h>


@interface PXSuggestLessPeopleHelper : NSObject <PXSuggestLessPeopleSelectionViewControllerDelegate, PXSuggestLessPeopleOptionSelectionViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXSuggestLessPeopleHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_showSuggestLessOptionForPerson:(id)arg0 completionHandler:(id)arg1 ;
-(void)_showSuggestLessPeopleSelectionForPeople:(id)arg0 completionHandler:(id)arg1 ;
-(void)_suggestLessPeople:(id)arg0 withSuggestLessOption:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)completeActionWithCompletionHandler:(id)arg0 ;
-(void)completeOptionSelectionActionWithCompletionHandler:(id)arg0 ;
-(void)didSelectPersonToSuggestLess:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(void)dismissOptionSelectionViewController:(id)arg0 completionHandler:(id)arg1 ;
-(void)dismissViewController:(id)arg0 completionHandler:(id)arg1 ;
-(void)suggestLessPeople:(id)arg0 completionHandler:(id)arg1 ;
-(void)suggestLessPeople:(id)arg0 withSuggestLessOption:(NSUInteger)arg1 dismissViewController:(id)arg2 completionHandler:(id)arg3 ;
-(void)suggestLessPeopleFromAssets:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif