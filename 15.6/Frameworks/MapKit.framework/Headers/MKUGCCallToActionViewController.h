// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKUGCCALLTOACTIONVIEWCONTROLLER_H
#define MKUGCCALLTOACTIONVIEWCONTROLLER_H

@class NSMutableArray, NSArray, NSString;
@protocol MKModuleViewControllerProtocol, MKUGCCallToActionViewDelegate;


#import "MKPlaceSectionViewController.h"

@interface MKUGCCallToActionViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol>

 {
    NSMutableArray *_sectionItemViews;
}


@property (retain, nonatomic) NSArray *callToActionAppearances; // ivar: _callToActionAppearances
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKUGCCallToActionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)_reloadCallToActionViewsAnimated:(BOOL)arg0 ;
-(void)_setupCallToActionViewsAnimated:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif