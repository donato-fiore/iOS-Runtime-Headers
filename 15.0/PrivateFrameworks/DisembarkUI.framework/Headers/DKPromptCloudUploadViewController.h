// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKPROMPTCLOUDUPLOADVIEWCONTROLLER_H
#define DKPROMPTCLOUDUPLOADVIEWCONTROLLER_H

@class OBWelcomeController;



@interface DKPromptCloudUploadViewController : OBWelcomeController

@property (copy, nonatomic) id *eraseNowBlock; // ivar: _eraseNowBlock
@property (copy, nonatomic) id *hasInternetConnectivity; // ivar: _hasInternetConnectivity
@property (copy, nonatomic) id *presentNetworkSettings; // ivar: _presentNetworkSettings
@property (copy, nonatomic) id *shouldWarnForDataUsage; // ivar: _shouldWarnForDataUsage
@property (copy, nonatomic) id *uploadThenEraseBlock; // ivar: _uploadThenEraseBlock


-(id)init;
-(void)_eraseTapped:(id)arg0 ;
-(void)_uploadTapped:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif