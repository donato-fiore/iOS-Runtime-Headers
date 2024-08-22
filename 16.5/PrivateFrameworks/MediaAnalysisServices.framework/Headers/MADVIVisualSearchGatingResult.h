// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MADVIVISUALSEARCHGATINGRESULT_H
#define MADVIVISUALSEARCHGATINGRESULT_H

@class NSData, NSArray;


#import "MADResult.h"

@interface MADVIVisualSearchGatingResult : MADResult

@property (readonly, nonatomic) BOOL passedGating;
@property (readonly, nonatomic) NSData *payload; // ivar: _payload
@property (readonly, nonatomic) NSArray *resultItems; // ivar: _resultItems


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResultItems:(id)arg0 andPayload:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif