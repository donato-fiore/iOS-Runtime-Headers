// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COMESHBASEBALLOTRESPONSE_H
#define COMESHBASEBALLOTRESPONSE_H



#import "COMeshResponse.h"
#import "COBallot.h"

@interface COMeshBaseBallotResponse : COMeshResponse

@property (copy, nonatomic) COBallot *ballot; // ivar: _ballot
@property (readonly, nonatomic) NSUInteger generation; // ivar: _generation
@property (readonly, nonatomic) NSInteger variant; // ivar: _variant


+(BOOL)supportsSecureCoding;
-(id)initWithBallot:(id)arg0 generation:(NSUInteger)arg1 ;
-(id)initWithBallot:(id)arg0 generation:(NSUInteger)arg1 variant:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif