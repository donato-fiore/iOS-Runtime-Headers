// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MINMAXINTFORMATTER_H
#define MINMAXINTFORMATTER_H



#import "APFormatter.h"

@interface MinMaxIntFormatter : APFormatter {
    NSInteger _minimum;
    NSInteger _maximum;
}




+(id)formatterForMin:(NSInteger)arg0 max:(NSInteger)arg1 ;
-(BOOL)isPartialStringValid:(id)arg0 newEditingString:(*id)arg1 errorDescription:(*id)arg2 ;
-(NSInteger)maximum;
-(NSInteger)minimum;
-(id)initWithMin:(NSInteger)arg0 max:(NSInteger)arg1 ;
-(void)setMaximum:(NSInteger)arg0 ;
-(void)setMinimum:(NSInteger)arg0 ;


@end


#endif