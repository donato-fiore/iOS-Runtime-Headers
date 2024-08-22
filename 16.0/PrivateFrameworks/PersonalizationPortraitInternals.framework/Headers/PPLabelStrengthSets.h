// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPLABELSTRENGTHSETS_H
#define PPLABELSTRENGTHSETS_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface PPLabelStrengthSets : NSObject

@property (readonly, nonatomic) NSSet *strong; // ivar: _strong
@property (readonly, nonatomic) NSSet *weak; // ivar: _weak


+(id)labelStrengthSetsWithWeakSet:(id)arg0 strongSet:(id)arg1 ;
-(id)initWithWeakSet:(id)arg0 strongSet:(id)arg1 ;


@end


#endif