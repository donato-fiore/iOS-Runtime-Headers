// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTATTACHMENTDETAILITEM_H
#define EKEVENTATTACHMENTDETAILITEM_H

@class NSArray, NSString;
@protocol EKEventAttachmentCellControllerDelegate;


#import "EKEventDetailItem.h"

@interface EKEventAttachmentDetailItem : EKEventDetailItem <EKEventAttachmentCellControllerDelegate>

 {
    NSArray *_cellControllers;
    BOOL _visibilityChanged;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(BOOL)detailItemVisibilityChanged;
-(BOOL)hasDetailViewControllerAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSubitems;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)owningEventForAttachmentCellController:(id)arg0 ;
-(id)parentViewControllerForAttachmentCellController:(id)arg0 ;
-(void)_cleanUpCellControllers;
-(void)_setUpCellControllers;
-(void)dealloc;
-(void)eventViewController:(id)arg0 didSelectSubitem:(NSUInteger)arg1 ;
-(void)reset;
-(void)setEvent:(id)arg0 store:(id)arg1 ;


@end


#endif