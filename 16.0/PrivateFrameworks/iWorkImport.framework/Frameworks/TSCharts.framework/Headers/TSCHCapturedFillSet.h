// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCAPTUREDFILLSET_H
#define TSCHCAPTUREDFILLSET_H

@class NSArray;


#import "TSCHFillSet.h"

@interface TSCHCapturedFillSet : TSCHFillSet {
    int _numberOfThemeSeriesStyles;
    NSArray *_seriesStyles;
}




+(id)capturedFillSetWithIdentifier:(id)arg0 seriesStyles:(id)arg1 numberOfThemeSeriesStyles:(NSUInteger)arg2 ;
-(NSUInteger)countOfDefinedSeriesForSeriesType:(id)arg0 ;
-(id)fillForSeriesIndex:(NSUInteger)arg0 seriesType:(id)arg1 context:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 seriesStyles:(id)arg1 numberOfThemeSeriesStyles:(NSUInteger)arg2 ;


@end


#endif