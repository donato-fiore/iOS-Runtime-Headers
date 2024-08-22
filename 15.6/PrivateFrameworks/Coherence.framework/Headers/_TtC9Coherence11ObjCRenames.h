// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9COHERENCE11OBJCRENAMES_H
#define _TTC9COHERENCE11OBJCRENAMES_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC9Coherence11ObjCRenames : NSObject {
    ? renames;
}


@property (nonatomic, readonly) NSInteger count;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger generation;
@property (nonatomic, readonly) BOOL hasLocalRenames;


-(id)init;
-(id)renamed:(NSInteger)arg0 replica:(id)arg1 ;
-(id)renamedWithRange:(struct _NSRange )arg0 replica:(id)arg1 ;
-(id)renamedWithReplica:(id)arg0 ;
-(void)addMappingWithReplica:(id)arg0 from:(NSInteger)arg1 ;
-(void)addMappingWithReplica:(id)arg0 fromRange:(struct _NSRange )arg1 ;


@end


#endif