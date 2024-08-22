// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKBARCODEEVENTMETADATAREQUEST_H
#define PKBARCODEEVENTMETADATAREQUEST_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKBarcodeEventMetadataRequest : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *deviceAccountIdentifier; // ivar: _deviceAccountIdentifier
@property (copy, nonatomic) NSString *lastUsedBarcodeIdentifier; // ivar: _lastUsedBarcodeIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithBarcodeIdentifier:(id)arg0 deviceAccountIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif