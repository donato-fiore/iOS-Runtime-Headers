// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDDIFFBUILDER_H
#define DNDDIFFBUILDER_H

@class NSMutableArray, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface DNDDiffBuilder : NSObject {
    NSMutableArray *_children;
}


@property (readonly, copy, nonatomic) NSArray *children;
@property (readonly, copy, nonatomic) NSString *description; // ivar: _description
@property (readonly, nonatomic) BOOL hasDifferences;
@property (readonly, nonatomic) id *object1; // ivar: _object1
@property (readonly, nonatomic) id *object2; // ivar: _object2


-(id)descriptionWithIndent:(NSUInteger)arg0 ;
-(id)init;
-(void)diffObject:(id)arg0 againstObject:(id)arg1 ;
-(void)diffObject:(id)arg0 againstObject:(id)arg1 withDescription:(id)arg2 ;
-(void)log:(id)arg0 withPrefix:(id)arg1 ;


@end


#endif