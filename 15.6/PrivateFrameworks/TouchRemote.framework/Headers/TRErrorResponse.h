// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRERRORRESPONSE_H
#define TRERRORRESPONSE_H

@class NSError;


#import "TRResponseMessage.h"

@interface TRErrorResponse : TRResponseMessage

@property (retain, nonatomic) NSError *error; // ivar: _error


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif