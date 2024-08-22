// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCECATEGORYREF_H
#define TSCECATEGORYREF_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCECategoryRef : NSObject <NSCopying>



@property (nonatomic) TSKUIDStruct absoluteGroupUid; // ivar: _absoluteGroupUid
@property (nonatomic) unsigned short aggrIndexLevel; // ivar: _aggrIndexLevel
@property (nonatomic) TSKUIDStruct columnUid; // ivar: _columnUid
@property (nonatomic) TSKUIDStruct groupByUid; // ivar: _groupByUid
@property (nonatomic) unsigned char groupLevel; // ivar: _groupLevel
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) unsigned char options; // ivar: _options
@property (readonly, nonatomic) TSKUIDStruct pivotTableUid;
@property (nonatomic) TSUPreserveFlags preserveFlags; // ivar: _preserveFlags
@property (readonly, nonatomic) BOOL refersToPivotTable;
@property (readonly, nonatomic) BOOL refersToPivotTableColumns;
@property (readonly, nonatomic) BOOL refersToPivotTableRows;
@property (nonatomic) short relativeColumn; // ivar: _relativeColumn
@property (nonatomic) TSKUIDStruct relativeGroupUid; // ivar: _relativeGroupUid
@property (nonatomic) BOOL showAggregateName;
@property (nonatomic) unsigned char type; // ivar: _aggType


+(BOOL)isRelativeAncestorGroupUid:(struct TSKUIDStruct *)arg0 ;
+(int)relativeLevelOfAncestorGroupUid:(struct TSKUIDStruct *)arg0 ;
+(struct TSKUIDStruct )groupByRootUid;
+(struct TSKUIDStruct )relativeAncestorGroupUid:(int)arg0 ;
-(BOOL)convertToBadRef;
-(BOOL)isBadRef;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)restoreFromBadRef;
-(NSUInteger)hash;
-(id)copyAndReplaceGroupUIDs:(struct TSKUIDStruct *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithGroupByUID:(struct TSKUIDStruct *)arg0 absGroupUid:(struct TSKUIDStruct *)arg1 columnUid:(struct TSKUIDStruct *)arg2 aggType:(unsigned char)arg3 groupLevel:(unsigned char)arg4 ;
-(id)initWithGroupByUID:(struct TSKUIDStruct *)arg0 absGroupUid:(struct TSKUIDStruct *)arg1 columnUid:(struct TSKUIDStruct *)arg2 aggType:(unsigned char)arg3 groupLevel:(unsigned char)arg4 aggrIndexLevel:(unsigned short)arg5 ;
-(id)initWithGroupByUID:(struct TSKUIDStruct *)arg0 relGroupUID:(struct TSKUIDStruct *)arg1 absGroupUid:(struct TSKUIDStruct *)arg2 columnUid:(struct TSKUIDStruct *)arg3 aggType:(unsigned char)arg4 groupLevel:(unsigned char)arg5 aggrIndexLevel:(unsigned short)arg6 preserveFlags:(struct TSUPreserveFlags *)arg7 ;
-(id)initWithGroupByUID:(struct TSKUIDStruct *)arg0 relGroupUID:(struct TSKUIDStruct *)arg1 absGroupUid:(struct TSKUIDStruct *)arg2 columnUid:(struct TSKUIDStruct *)arg3 aggType:(unsigned char)arg4 groupLevel:(unsigned char)arg5 aggrIndexLevel:(unsigned short)arg6 preserveFlags:(struct TSUPreserveFlags *)arg7 relativeColumn:(short)arg8 options:(unsigned char)arg9 ;
-(void)setAsAbsoluteWithGroupUid:(struct TSKUIDStruct *)arg0 ;
-(void)setAsRelativeWithGroupUid:(struct TSKUIDStruct *)arg0 ;


@end


#endif