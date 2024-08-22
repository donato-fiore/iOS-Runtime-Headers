// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLSTRUCTTYPEINTERNAL_H
#define MTLSTRUCTTYPEINTERNAL_H

@class NSDictionary, NSArray, NSString;


#import "MTLStructType.h"

@interface MTLStructTypeInternal : MTLStructType {
    NSUInteger _dataType;
    NSDictionary *_dictionary;
    NSArray *_members;
}


@property BOOL isIndirectArgumentBuffer; // ivar: _isIndirectArgumentBuffer
@property (readonly) NSString *typeName; // ivar: _typeName


-(BOOL)isStructLayoutThreadSafeWith:(id)arg0 ;
-(NSUInteger)dataType;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithMembers:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)initWithMembers:(*id)arg0 count:(NSUInteger)arg1 typeName:(id)arg2 ;
-(id)memberByName:(id)arg0 ;
-(id)members;
-(void)dealloc;
-(void)setMembers:(*id)arg0 count:(NSUInteger)arg1 ;


@end


#endif