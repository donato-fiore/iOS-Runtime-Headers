// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACEENCYCLOPEDICVIEWCONTROLLER_H
#define MKPLACEENCYCLOPEDICVIEWCONTROLLER_H

@class NSMutableArray, NSString;
@protocol _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol, MKPlaceCardEncyclopedicControllerDelegate, GEOEncyclopedicInfo;


#import "MKPlaceSectionViewController.h"
#import "MKPlaceTextBlockCell.h"

@interface MKPlaceEncyclopedicViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>

 {
    BOOL _textBlockExpanded;
    MKPlaceTextBlockCell *_textCell;
    NSMutableArray *_factoidCells;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<MKPlaceCardEncyclopedicControllerDelegate> *encyclopedicControllerDelegate; // ivar: _encyclopedicControllerDelegate
@property (retain, nonatomic) NSObject<GEOEncyclopedicInfo> *encyclopedicInfo; // ivar: _encyclopedicInfo
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(id)_factoids;
-(id)_textBlockText;
-(id)_textBlockTitle;
-(id)draggableContent;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(void)_updateViews;
-(void)_viewEncyclopedicContent;
-(void)viewDidLoad;


@end


#endif