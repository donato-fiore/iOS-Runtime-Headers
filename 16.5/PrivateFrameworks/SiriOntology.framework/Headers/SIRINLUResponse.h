// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLURESPONSE_H
#define SIRINLURESPONSE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SIRINLURequestID.h"
#import "SIRINLUResponseStatus.h"

@interface SIRINLUResponse : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *parses; // ivar: _parses
@property (retain, nonatomic) NSArray *repetitionResults; // ivar: _repetitionResults
@property (retain, nonatomic) SIRINLURequestID *requestId; // ivar: _requestId
@property (retain, nonatomic) SIRINLUResponseStatus *responseStatus; // ivar: _responseStatus


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestId:(id)arg0 parses:(id)arg1 ;
-(id)initWithRequestId:(id)arg0 parses:(id)arg1 repetitionResults:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif