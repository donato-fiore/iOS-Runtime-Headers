// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDANONYMOUSSHARETUPLE_H
#define CKDANONYMOUSSHARETUPLE_H

@class NSString, CKRecordID, CKRecordZoneID;
@protocol NSSecureCoding, NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKDAnonymousShareTuple : NSObject <NSSecureCoding, NSCoding, NSCopying>



@property (copy) NSString *ckAnonymousShareHashIdentifier; // ivar: _ckAnonymousShareHashIdentifier
@property (readonly, nonatomic) CKRecordID *shareID; // ivar: _shareID
@property (readonly, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithZoneID:(id)arg0 shareID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif