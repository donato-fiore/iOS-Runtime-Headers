// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACEMESSAGEVIEWCONTROLLER_H
#define MKPLACEMESSAGEVIEWCONTROLLER_H

@class NSString;
@protocol _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol, _MKInfoCardAnalyticsDelegate, _MKPlaceItem;


#import "MKPlaceSectionViewController.h"

@interface MKPlaceMessageViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>



@property (weak, nonatomic) NSObject<_MKInfoCardAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<_MKPlaceItem> *placeItem; // ivar: _placeItem
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)initWithPlaceItem:(id)arg0 ;
-(void)loadRow;
-(void)sectionView:(id)arg0 didSelectRow:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)viewDidLoad;


@end


#endif