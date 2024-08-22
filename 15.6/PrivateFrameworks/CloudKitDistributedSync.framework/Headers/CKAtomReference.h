// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKATOMREFERENCE_H
#define CKATOMREFERENCE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CKAtomLocation.h"
#import "CKMergeableValueID.h"
#import "CKDistributedTimestamp.h"

@interface CKAtomReference : NSObject <NSCopying>



@property (readonly, nonatomic) CKAtomLocation *location;
@property (retain, nonatomic) CKMergeableValueID *mergeableValueID; // ivar: _mergeableValueID
@property (retain, nonatomic) CKDistributedTimestamp *timestamp; // ivar: _timestamp
@property (nonatomic) unsigned char type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToReference:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLocation:(id)arg0 ;
-(id)initWithLocation:(id)arg0 timestamp:(id)arg1 type:(unsigned char)arg2 ;
-(id)initWithMergeableValueID:(id)arg0 ;
-(id)initWithMergeableValueID:(id)arg0 timestamp:(id)arg1 ;
-(id)initWithMergeableValueID:(id)arg0 timestamp:(id)arg1 type:(unsigned char)arg2 ;


@end


#endif