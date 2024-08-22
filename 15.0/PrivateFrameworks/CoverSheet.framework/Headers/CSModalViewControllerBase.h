// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSMODALVIEWCONTROLLERBASE_H
#define CSMODALVIEWCONTROLLERBASE_H

@class NSString;
@protocol CSModalViewDelegate;


#import "CSCoverSheetViewControllerBase.h"

@interface CSModalViewControllerBase : CSCoverSheetViewControllerBase <CSModalViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)viewClass;
-(BOOL)isPortrait;
-(NSInteger)presentationPriority;
-(NSInteger)presentationStyle;
-(NSInteger)presentationType;
-(id)view;
-(id)viewIfLoaded;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)handlePrimaryActionForView:(id)arg0 ;
-(void)handleSecondaryActionForView:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif