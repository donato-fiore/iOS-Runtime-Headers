// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(id)renamed:(id)arg0 ;
-(id)renamedWithRange:(struct _NSRange )arg0 replica:(id)arg1 ;


@end


#endif