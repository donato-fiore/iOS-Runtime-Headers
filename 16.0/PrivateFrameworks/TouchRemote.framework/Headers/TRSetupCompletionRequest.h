// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRSETUPCOMPLETIONREQUEST_H
#define TRSETUPCOMPLETIONREQUEST_H



#import "TRRequestMessage.h"

@interface TRSetupCompletionRequest : TRRequestMessage

@property (nonatomic) BOOL completedSuccessfully; // ivar: _completedSuccessfully
@property (nonatomic) NSInteger errorCode; // ivar: _errorCode


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif