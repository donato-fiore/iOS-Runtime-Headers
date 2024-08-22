// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFEEDBACKFILERADARVIEWCONTROLLER_H
#define PXFEEDBACKFILERADARVIEWCONTROLLER_H

@class UINavigationController;



@interface PXFeedbackFileRadarViewController : UINavigationController

@property (readonly, nonatomic) NSUInteger collectionType; // ivar: _collectionType
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler


-(id)initWithCollectionType:(NSUInteger)arg0 ;
-(void)_handleCompletion;
-(void)_handleRadarFiledWithError:(id)arg0 ;
-(void)_handleUserCancel:(id)arg0 ;
-(void)_handleUserConfirmation;


@end


#endif