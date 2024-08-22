// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI27PREVIEWPLAYERVIEWCONTROLLER_H
#define _TTC9SEYMOURUI27PREVIEWPLAYERVIEWCONTROLLER_H

@class AVPlayerViewController;



@interface _TtC9SeymourUI27PreviewPlayerViewController : AVPlayerViewController {
    ? contentIdentifier;
    ? dataProvider;
    ? eventHub;
    ? metricPage;
}


@property (nonatomic, readonly) NSUInteger supportedInterfaceOrientations;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPlayerLayerView:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif