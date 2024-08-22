// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPCSDATA_H
#define CKDPCSDATA_H

@class NSString, NSData;
@protocol PQLValuable, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKDPCSData : NSObject <PQLValuable, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *etag; // ivar: _etag
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSSecureCoding> *itemID;
@property (nonatomic) *_OpaquePCSShareProtection pcs; // ivar: _pcs
@property (copy, nonatomic) NSData *pcsData; // ivar: _pcsData
@property (retain, nonatomic) NSString *pcsKeyID; // ivar: _pcsKeyID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)newFromSqliteStatement:(struct sqlite3_stmt *)arg0 atIndex:(int)arg1 ;
-(BOOL)shouldEncodePCSData;
-(id)CKPropertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPCSData:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1 ;


@end


#endif