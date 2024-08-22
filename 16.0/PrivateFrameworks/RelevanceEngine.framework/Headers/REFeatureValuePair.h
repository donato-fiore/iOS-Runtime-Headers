// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REFEATUREVALUEPAIR_H
#define REFEATUREVALUEPAIR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "REFeature.h"

@interface REFeatureValuePair : NSObject <NSCopying>



@property (readonly, nonatomic) REFeature *feature; // ivar: _feature
@property (readonly, nonatomic) NSUInteger value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFeature:(id)arg0 value:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif