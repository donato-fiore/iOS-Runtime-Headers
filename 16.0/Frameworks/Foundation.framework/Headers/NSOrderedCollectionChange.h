// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSORDEREDCOLLECTIONCHANGE_H
#define NSORDEREDCOLLECTIONCHANGE_H


#import <Foundation/Foundation.h>


@interface NSOrderedCollectionChange : NSObject

@property (readonly) NSUInteger associatedIndex; // ivar: _associatedIndex
@property (readonly) NSInteger changeType; // ivar: _changeType
@property (readonly) NSUInteger index; // ivar: _index
@property (readonly) id *object; // ivar: _object


+(id)changeWithObject:(id)arg0 type:(NSInteger)arg1 index:(NSUInteger)arg2 ;
+(id)changeWithObject:(id)arg0 type:(NSInteger)arg1 index:(NSUInteger)arg2 associatedIndex:(NSUInteger)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)init;
-(id)initWithObject:(id)arg0 type:(NSInteger)arg1 index:(NSUInteger)arg2 ;
-(id)initWithObject:(id)arg0 type:(NSInteger)arg1 index:(NSUInteger)arg2 associatedIndex:(NSUInteger)arg3 ;
-(void)dealloc;


@end


#endif