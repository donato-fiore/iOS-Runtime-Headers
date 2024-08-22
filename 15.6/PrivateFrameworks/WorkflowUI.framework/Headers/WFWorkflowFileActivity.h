// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWORKFLOWFILEACTIVITY_H
#define WFWORKFLOWFILEACTIVITY_H

@class UIActivity, NSArray, UIBarButtonItem, UIView, WFFileRepresentation;



@interface WFWorkflowFileActivity : UIActivity

@property (copy, nonatomic) NSArray *activityItems; // ivar: _activityItems
@property (nonatomic) NSUInteger arrowDirection; // ivar: _arrowDirection
@property (retain, nonatomic) UIBarButtonItem *barButtonItem; // ivar: _barButtonItem
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly, nonatomic) WFFileRepresentation *workflowFile; // ivar: _workflowFile


+(id)activityType;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(id)initWithSourceView:(id)arg0 sourceRect:(struct CGRect )arg1 barButtonItem:(id)arg2 ;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif