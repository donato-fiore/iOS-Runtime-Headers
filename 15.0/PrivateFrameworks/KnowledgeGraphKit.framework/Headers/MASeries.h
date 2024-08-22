// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MASERIES_H
#define MASERIES_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "MAIndexCache.h"
#import "MAFloatVector.h"

@interface MASeries : NSObject

@property (readonly, nonatomic) MAIndexCache *indexCache; // ivar: _indexCache
@property (readonly, copy, nonatomic) NSArray *labels;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) MAFloatVector *vector; // ivar: _vector


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)valueAtIndex:(NSInteger)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 indexCache:(id)arg1 vector:(id)arg2 ;
-(id)initWithName:(id)arg0 labels:(id)arg1 vector:(id)arg2 ;
-(id)valueByLabels;
-(id)valueForLabel:(id)arg0 ;


@end


#endif