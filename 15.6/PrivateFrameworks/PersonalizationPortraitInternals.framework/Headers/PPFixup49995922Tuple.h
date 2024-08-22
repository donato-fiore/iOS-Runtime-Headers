// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPFIXUP49995922TUPLE_H
#define PPFIXUP49995922TUPLE_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PPFixup49995922Tuple : NSObject <NSCopying>



@property (readonly, nonatomic) NSUUID *dkUUID; // ivar: _dkUUID
@property (readonly, nonatomic) NSObject *record; // ivar: _record
@property (readonly, nonatomic) NSInteger rowid; // ivar: _rowid


+(id)tupleWithRowid:(NSInteger)arg0 record:(id)arg1 dkUUID:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTuple:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithRowid:(NSInteger)arg0 record:(id)arg1 dkUUID:(id)arg2 ;


@end


#endif