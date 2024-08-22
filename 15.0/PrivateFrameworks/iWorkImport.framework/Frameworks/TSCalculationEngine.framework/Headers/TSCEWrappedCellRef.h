// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCEWRAPPEDCELLREF_H
#define TSCEWRAPPEDCELLREF_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCEWrappedCellRef : NSObject <NSCopying>



@property (readonly, nonatomic) TSCECellRef cellRef; // ivar: _cellRef
@property (readonly, nonatomic) TSUCellCoord coordinate;
@property (readonly, retain, nonatomic) NSUUID *tableID;
@property (readonly, nonatomic) TSKUIDStruct tableUID;


+(id)invalidCellRef;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCellCoord:(struct TSUCellCoord )arg0 tableID:(id)arg1 ;
-(id)initWithCellCoord:(struct TSUCellCoord )arg0 tableUID:(struct TSKUIDStruct )arg1 ;
-(id)initWithCellRef:(struct TSCECellRef *)arg0 ;


@end


#endif