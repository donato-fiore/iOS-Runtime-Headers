// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSHARESHEETPRESENTER_H
#define MUSHARESHEETPRESENTER_H

@class NSString;
@protocol MUActivityViewControllerDelegate, MUShareSheetPresenterDelegate, _MKPlaceItem;

#import <Foundation/Foundation.h>

#import "MUActivityViewController.h"
#import "MUPresentationOptions.h"

@interface MUShareSheetPresenter : NSObject <MUActivityViewControllerDelegate>

 {
    MUActivityViewController *_activityViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUShareSheetPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<_MKPlaceItem> *placeItem; // ivar: _placeItem
@property (readonly, nonatomic) MUPresentationOptions *presentationOptions; // ivar: _presentationOptions
@property (readonly) Class superclass;


-(id)initWithPlaceItem:(id)arg0 presentationOptions:(id)arg1 ;
-(void)mapkitActivityViewController:(id)arg0 postCompletedActivityOfType:(id)arg1 completed:(BOOL)arg2 ;
-(void)mapkitActivityViewController:(id)arg0 preCompletedActivityOfType:(id)arg1 completed:(BOOL)arg2 ;
-(void)present;


@end


#endif