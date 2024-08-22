// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NTKCOMPLICATIONSTATELAYOUT_H
#define _NTKCOMPLICATIONSTATELAYOUT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "NTKComplicationLayoutRule.h"

@interface _NTKComplicationStateLayout : NSObject {
    NSMutableDictionary *_overrideRules;
}


@property (retain, nonatomic) NTKComplicationLayoutRule *defaultRule; // ivar: _defaultRule


-(id)ruleForLayoutOverride:(NSInteger)arg0 ;
-(void)setRule:(id)arg0 forLayoutOverride:(NSInteger)arg1 ;


@end


#endif