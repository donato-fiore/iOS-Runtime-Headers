// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKATOMLOCATION_H
#define CKATOMLOCATION_H

@class NSData, NSString, CKRecordZoneID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKAtomLocation : NSObject <NSCopying>



@property (retain, nonatomic) NSData *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLocation:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithData:(id)arg0 zoneID:(id)arg1 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 zoneID:(id)arg1 ;


@end


#endif