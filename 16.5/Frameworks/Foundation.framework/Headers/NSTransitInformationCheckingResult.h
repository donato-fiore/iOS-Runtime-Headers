// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSTRANSITINFORMATIONCHECKINGRESULT_H
#define NSTRANSITINFORMATIONCHECKINGRESULT_H

@class NSDictionary;


#import "NSTextCheckingResult.h"

@interface NSTransitInformationCheckingResult : NSTextCheckingResult {
    _NSRange _range;
    NSDictionary *_components;
    id *_underlyingResult;
}


@property (readonly) *void underlyingResult;


+(BOOL)supportsSecureCoding;
-(BOOL)_adjustRangesWithOffset:(NSInteger)arg0 ;
-(NSUInteger)resultType;
-(id)components;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRange:(struct _NSRange )arg0 components:(id)arg1 ;
-(id)initWithRange:(struct _NSRange )arg0 components:(id)arg1 underlyingResult:(*void)arg2 ;
-(id)resultByAdjustingRangesWithOffset:(NSInteger)arg0 ;
-(struct _NSRange )range;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif