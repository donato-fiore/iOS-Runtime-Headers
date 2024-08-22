// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDMARKASSETBROKENURLREQUESTWRAPPEROPERATION_H
#define CKDMARKASSETBROKENURLREQUESTWRAPPEROPERATION_H



#import "CKDOperation.h"
#import "CKDMarkAssetBrokenURLRequest.h"

@interface CKDMarkAssetBrokenURLRequestWrapperOperation : CKDOperation

@property (retain, nonatomic) CKDMarkAssetBrokenURLRequest *urlRequest; // ivar: _urlRequest


-(BOOL)shouldCheckAppVersion;
-(id)activityCreate;
-(int)operationType;
-(void)main;


@end


#endif