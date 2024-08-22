// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSCLOUDKITDATAFILEBACKEDFUTURE_H
#define _NSCLOUDKITDATAFILEBACKEDFUTURE_H

@class NSDataFileBackedFuture;



@interface _NSCloudKitDataFileBackedFuture : NSDataFileBackedFuture



-(BOOL)_isCloudKitSupportOriginated;
-(id)initWithStoreMetadata:(id)arg0 directory:(id)arg1 originalFileURL:(id)arg2 ;
-(void)_copyToInterimLocation;
-(void)_moveToPermanentLocation;


@end


#endif