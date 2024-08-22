// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFERRORFEEDBACK_H
#define SFERRORFEEDBACK_H

@class NSError;


#import "SFFeedback.h"

@interface SFErrorFeedback : SFFeedback

@property (retain, nonatomic) NSError *error; // ivar: _error


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif