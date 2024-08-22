// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _REFEATUREVALUEPAIR_H
#define _REFEATUREVALUEPAIR_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "REFeature.h"

@interface _REFeatureValuePair : NSObject

@property (readonly, nonatomic) REFeature *feature; // ivar: _feature
@property (readonly, nonatomic) NSUInteger index; // ivar: _index
@property (readonly, nonatomic) NSArray *rootFeatures; // ivar: _rootFeatures
@property (readonly, nonatomic) NSUInteger value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithFeature:(id)arg0 value:(NSUInteger)arg1 index:(NSUInteger)arg2 rootFeatures:(id)arg3 ;
-(void)dealloc;


@end


#endif