// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFSTATEDUMPBUILDER_H
#define HFSTATEDUMPBUILDER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "HFStateDumpBuilderContext.h"

@interface HFStateDumpBuilder : NSObject

@property (readonly, nonatomic) HFStateDumpBuilderContext *context; // ivar: _context
@property (readonly, nonatomic) NSMutableArray *entries; // ivar: _entries
@property (readonly, nonatomic) id *object; // ivar: _object


+(id)_coerceObjectToPropertyList:(id)arg0 options:(NSUInteger)arg1 ;
+(id)builderWithObject:(id)arg0 context:(id)arg1 ;
-(id)_filteredEntries;
-(id)_formattedObjectForEntry:(id)arg0 withRepresentation:(NSUInteger)arg1 ;
-(id)_formattedObjectForObject:(id)arg0 withRepresentation:(NSUInteger)arg1 context:(id)arg2 options:(NSUInteger)arg3 ;
-(id)buildDescription;
-(id)buildPropertyListRepresentation;
-(id)initWithObject:(id)arg0 context:(id)arg1 ;
-(void)appendBool:(BOOL)arg0 withName:(id)arg1 ;
-(void)appendBool:(BOOL)arg0 withName:(id)arg1 ifEqualTo:(BOOL)arg2 ;
-(void)appendObject:(id)arg0 withName:(id)arg1 ;
-(void)appendObject:(id)arg0 withName:(id)arg1 context:(id)arg2 ;
-(void)appendObject:(id)arg0 withName:(id)arg1 context:(id)arg2 options:(NSUInteger)arg3 ;
-(void)appendObject:(id)arg0 withName:(id)arg1 options:(NSUInteger)arg2 ;


@end


#endif