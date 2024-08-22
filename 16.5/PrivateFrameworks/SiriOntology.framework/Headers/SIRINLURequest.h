// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUREQUEST_H
#define SIRINLUREQUEST_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SIRINLUTurnInput.h"
#import "SIRINLURequestID.h"

@interface SIRINLURequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) SIRINLUTurnInput *currentTurnInput; // ivar: _currentTurnInput
@property (retain, nonatomic) NSArray *previousTurnInputs; // ivar: _previousTurnInputs
@property (retain, nonatomic) SIRINLURequestID *requestId; // ivar: _requestId


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestId:(id)arg0 currentTurnInput:(id)arg1 previousTurnInputs:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif