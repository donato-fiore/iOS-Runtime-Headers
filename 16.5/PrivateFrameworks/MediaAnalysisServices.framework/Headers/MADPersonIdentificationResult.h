// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MADPERSONIDENTIFICATIONRESULT_H
#define MADPERSONIDENTIFICATIONRESULT_H

@class NSArray;


#import "MADResult.h"

@interface MADPersonIdentificationResult : MADResult

@property (readonly, nonatomic) NSArray *resultItems; // ivar: _resultItems


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResultItems:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif