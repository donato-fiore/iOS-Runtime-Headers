// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKASSETDOWNLOADSTAGINGINFO_H
#define CKASSETDOWNLOADSTAGINGINFO_H

@class NSString, NSNumber, NSData;
@protocol CKPropertiesDescription, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKAssetDownloadStagingInfo : NSObject <CKPropertiesDescription, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *itemID; // ivar: _itemID
@property (readonly, copy, nonatomic) NSData *signature; // ivar: _signature
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *trackingUUID; // ivar: _trackingUUID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemID:(id)arg0 trackingUUID:(id)arg1 signature:(id)arg2 ;
-(id)redactedDescription;
-(void)CKDescribePropertiesUsing:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif