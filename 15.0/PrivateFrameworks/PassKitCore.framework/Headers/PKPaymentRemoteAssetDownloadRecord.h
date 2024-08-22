// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTREMOTEASSETDOWNLOADRECORD_H
#define PKPAYMENTREMOTEASSETDOWNLOADRECORD_H

@class NSURL, NSDictionary;
@protocol NSSecureCoding;


#import "PKPaymentBackgroundDownloadRecord.h"

@interface PKPaymentRemoteAssetDownloadRecord : PKPaymentBackgroundDownloadRecord <NSSecureCoding>



@property (retain, nonatomic) NSURL *passURL; // ivar: _passURL
@property (retain, nonatomic) NSDictionary *remoteAssetsByRecordName; // ivar: _remoteAssetsByRecordName
@property (retain, nonatomic) NSDictionary *remoteAssetsByTaskIdentifier; // ivar: _remoteAssetsByTaskIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)hasOutstandingRemoteAssetTasks;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeRemoteCloudStoreAssetForRecordName:(id)arg0 ;
-(void)removeRemoteURLAssetForTaskIdentifier:(id)arg0 ;
-(void)setRemoteCloudStoreAsset:(id)arg0 forRecordName:(id)arg1 ;
-(void)setRemoteURLAsset:(id)arg0 forTaskIdentifier:(id)arg1 ;


@end


#endif