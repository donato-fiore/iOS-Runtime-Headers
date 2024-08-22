// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCOMPLICATIONLAYOUT_H
#define NTKCOMPLICATIONLAYOUT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface NTKComplicationLayout : NSObject {
    NSMutableArray *_stateLayouts;
}




+(id)layoutWithDefaultRule:(id)arg0 ;
-(id)_layoutForState:(NSInteger)arg0 ;
-(id)defaultLayoutRuleForState:(NSInteger)arg0 ;
-(id)init;
-(id)layoutRuleForComplicationState:(NSInteger)arg0 layoutOverride:(NSInteger)arg1 ;
-(void)setDefaultLayoutRule:(id)arg0 forState:(NSInteger)arg1 ;
-(void)setOverrideLayoutRule:(id)arg0 forState:(NSInteger)arg1 layoutOverride:(NSInteger)arg2 ;


@end


#endif