// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTCHANGEDESCRIPTOR_H
#define TSTCHANGEDESCRIPTOR_H

@class NSHashTable;

#import <Foundation/Foundation.h>

#import "TSTCellRegion.h"

@interface TSTChangeDescriptor : NSObject

@property (readonly, nonatomic) ? cellID; // ivar: mCellID
@property (readonly, nonatomic) TSTCellRegion *cellRegion; // ivar: mCellRegion
@property (readonly, nonatomic) int changeDescriptor; // ivar: mChangeDescriptor
@property (retain, nonatomic) TSTCellRegion *expandedRegion; // ivar: mExpandedRegion
@property (readonly, nonatomic) NSHashTable *referenceIdentifiers; // ivar: mReferenceIdentifiers
@property (readonly, nonatomic) TSTCellRegion *strokeRegion; // ivar: mStrokeRegion


+(id)changeDescriptorWithType:(int)arg0 ;
+(id)changeDescriptorWithType:(int)arg0 cellID:(struct ? )arg1 cellRange:(struct ? )arg2 ;
+(id)changeDescriptorWithType:(int)arg0 cellID:(struct ? )arg1 cellRange:(struct ? )arg2 strokeRange:(struct ? )arg3 ;
+(id)changeDescriptorWithType:(int)arg0 cellID:(struct ? )arg1 cellRegion:(id)arg2 strokeRegion:(id)arg3 ;
+(id)changeDescriptorWithType:(int)arg0 cellID:(struct ? )arg1 strokeRange:(struct ? )arg2 ;
+(id)changeDescriptorWithType:(int)arg0 cellRange:(struct ? )arg1 ;
+(id)changeDescriptorWithType:(int)arg0 cellRange:(struct ? )arg1 strokeRange:(struct ? )arg2 ;
+(id)changeDescriptorWithType:(int)arg0 cellRegion:(id)arg1 ;
+(id)changeDescriptorWithType:(int)arg0 cellRegion:(id)arg1 strokeRegion:(id)arg2 ;
+(id)changeDescriptorWithType:(int)arg0 referenceIdentifiers:(id)arg1 ;
+(id)changeDescriptorWithType:(int)arg0 strokeRange:(struct ? )arg1 ;
+(id)changeDescriptorWithType:(int)arg0 strokeRegion:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithChangeDescriptorType:(int)arg0 andCellRegion:(id)arg1 andCellID:(struct ? )arg2 andStrokeRegion:(id)arg3 andReferenceIdentifiers:(id)arg4 ;
-(struct ? )cellRange;
-(struct ? )expandedRange;
-(struct ? )strokeRange;
-(void)dealloc;
-(void)setExpandedRange:(struct ? )arg0 ;


@end


#endif