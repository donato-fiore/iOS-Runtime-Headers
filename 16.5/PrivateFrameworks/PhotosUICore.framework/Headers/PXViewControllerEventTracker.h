// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXVIEWCONTROLLEREVENTTRACKER_H
#define PXVIEWCONTROLLEREVENTTRACKER_H

@class NSString, NSMutableDictionary;
@protocol PXViewControllerEventTracker, PXChangeObserver, PXAnonymousViewController;


#import "PXUserInterfaceElementEventTracker.h"

@interface PXViewControllerEventTracker : PXUserInterfaceElementEventTracker <PXViewControllerEventTracker, PXChangeObserver>



@property (weak, nonatomic) NSObject<PXAnonymousViewController> *currentViewController; // ivar: _currentViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isViewVisible; // ivar: _isViewVisible
@property (copy, nonatomic) NSMutableDictionary *payload;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *viewName; // ivar: _viewName
@property (nonatomic) NSInteger viewSignpost; // ivar: _viewSignpost


-(id)init;
-(id)initWithViewName:(id)arg0 ;
-(void)_invalidateIsViewVisible;
-(void)_updateIsViewVisible;
-(void)didPerformChanges;
-(void)logViewControllerDidAppear:(id)arg0 ;
-(void)logViewControllerDidDisappear:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif