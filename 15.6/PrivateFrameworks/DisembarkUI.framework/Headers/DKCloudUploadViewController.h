// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DKCLOUDUPLOADVIEWCONTROLLER_H
#define DKCLOUDUPLOADVIEWCONTROLLER_H

@class OBSetupAssistantProgressController, NSDateComponentsFormatter;



@interface DKCloudUploadViewController : OBSetupAssistantProgressController

@property (copy, nonatomic) id *cancelBlock; // ivar: _cancelBlock
@property (retain, nonatomic) NSDateComponentsFormatter *durationFormatter; // ivar: _durationFormatter
@property (nonatomic) BOOL showUploadFailureAlert; // ivar: _showUploadFailureAlert
@property (copy, nonatomic) id *skipBlock; // ivar: _skipBlock
@property (nonatomic) NSUInteger uploadResult; // ivar: _uploadResult


-(id)_timeRemainingString:(CGFloat)arg0 ;
-(id)init;
-(void)_cancelTapped:(id)arg0 ;
-(void)_showUploadFailureAlertForResult:(NSUInteger)arg0 ;
-(void)_skipTapped:(id)arg0 ;
-(void)setProgress:(CGFloat)arg0 ;
-(void)uploadDidComplete:(NSUInteger)arg0 ;
-(void)uploadProgress:(float)arg0 withTimeRemaining:(CGFloat)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif