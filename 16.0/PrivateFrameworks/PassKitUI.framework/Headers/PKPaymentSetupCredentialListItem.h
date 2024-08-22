// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPCREDENTIALLISTITEM_H
#define PKPAYMENTSETUPCREDENTIALLISTITEM_H

@class PKPaymentCredential, NSString, UIImage;
@protocol NSCopying, PKPassSnapshotCoordinatableSource;


#import "PKPaymentSetupListItem.h"

@interface PKPaymentSetupCredentialListItem : PKPaymentSetupListItem <NSCopying, PKPassSnapshotCoordinatableSource>



@property (readonly, nonatomic) PKPaymentCredential *credential; // ivar: _credential
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRefund; // ivar: _isRefund
@property (nonatomic) BOOL isSnapshotFetchInProgress; // ivar: _isSnapshotFetchInProgress
@property (nonatomic) BOOL isUnavailable; // ivar: _isUnavailable
@property (nonatomic) NSUInteger lastCheckedCredentialHash; // ivar: _lastCheckedCredentialHash
@property (retain, nonatomic) UIImage *passSnapshot; // ivar: _passSnapshot
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCredential:(id)arg0 ;


@end


#endif