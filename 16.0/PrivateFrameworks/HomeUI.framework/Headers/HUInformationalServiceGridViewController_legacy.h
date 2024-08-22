// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUINFORMATIONALSERVICEGRIDVIEWCONTROLLER_LEGACY_H
#define HUINFORMATIONALSERVICEGRIDVIEWCONTROLLER_LEGACY_H

@class NSSet, NSString;
@protocol HUServiceGridItemManagerDelegate;


#import "HUServiceGridViewController.h"

@interface HUInformationalServiceGridViewController_legacy : HUServiceGridViewController <HUServiceGridItemManagerDelegate>



@property (copy, nonatomic) NSSet *accessoriesToDisplay; // ivar: _accessoriesToDisplay
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)presentationCoordinator:(id)arg0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint )arg1 view:(id)arg2 ;
-(BOOL)serviceGridItemManager:(id)arg0 shouldHideItem:(id)arg1 ;
-(id)init;
-(id)layoutOptionsForSection:(NSInteger)arg0 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;


@end


#endif