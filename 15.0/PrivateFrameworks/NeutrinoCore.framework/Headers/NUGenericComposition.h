// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUGENERICCOMPOSITION_H
#define NUGENERICCOMPOSITION_H

@class NSMutableDictionary, NSDictionary;


#import "NUComposition.h"

@interface NUGenericComposition : NUComposition {
    NSMutableDictionary *_contents;
}


@property (copy, nonatomic) NSDictionary *contents;


-(id)initWithCompositionSchema:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif