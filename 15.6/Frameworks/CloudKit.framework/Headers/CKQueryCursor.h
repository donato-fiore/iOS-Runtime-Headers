// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKQUERYCURSOR_H
#define CKQUERYCURSOR_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CKRecordZoneID.h"

@interface CKQueryCursor : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID


+(BOOL)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 zoneID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif