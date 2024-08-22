// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPCSDATA_H
#define CKDPCSDATA_H

@class NSString, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKDPCSData : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *etag; // ivar: _etag
@property (readonly, nonatomic) NSObject<NSSecureCoding> *itemID;
@property (nonatomic) *_OpaquePCSShareProtection pcs; // ivar: _pcs
@property (copy, nonatomic) NSData *pcsData; // ivar: _pcsData
@property (retain, nonatomic) NSString *pcsKeyID; // ivar: _pcsKeyID


+(BOOL)supportsSecureCoding;
-(BOOL)shouldEncodePCSData;
-(id)CKPropertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPCSData:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif