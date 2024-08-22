// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUBASICPROGRESS_H
#define TSUBASICPROGRESS_H



#import "TSUProgress.h"
#import "TSUBasicProgressStorage.h"

@interface TSUBasicProgress : TSUProgress {
    TSUBasicProgressStorage *mStorage;
}


@property (getter=isIndeterminate) BOOL indeterminate;
@property CGFloat value;


-(CGFloat)maxValue;
-(id)init;
-(id)initWithMaxValue:(CGFloat)arg0 ;
-(void)dealloc;


@end


#endif