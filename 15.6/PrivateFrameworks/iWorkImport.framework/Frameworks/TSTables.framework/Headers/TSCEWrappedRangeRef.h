// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCEWRAPPEDRANGEREF_H
#define TSCEWRAPPEDRANGEREF_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCEWrappedRangeRef : NSObject <NSCopying>



@property (readonly, nonatomic) TSCERangeCoordinate rangeCoord;
@property (readonly, nonatomic) TSCERangeRef rangeRef; // ivar: _rangeRef
@property (readonly, retain, nonatomic) NSUUID *tableID;
@property (readonly, nonatomic) TSKUIDStruct tableUID;


+(id)invalidRangeRef;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithRangeCoord:(struct TSCERangeCoordinate )arg0 tableID:(id)arg1 ;
-(id)initWithRangeCoord:(struct TSCERangeCoordinate )arg0 tableUID:(struct TSKUIDStruct )arg1 ;
-(id)initWithRangeRef:(struct TSCERangeRef *)arg0 ;
-(id)initWithRangeRefRect:(struct TSUCellRect )arg0 tableID:(id)arg1 ;


@end


#endif