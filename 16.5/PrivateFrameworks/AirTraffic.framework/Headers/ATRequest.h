// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATREQUEST_H
#define ATREQUEST_H

@class NSString;
@protocol NSSecureCoding;


#import "ATMessage.h"

@interface ATRequest : ATMessage <NSSecureCoding>



@property (copy, nonatomic) NSString *command; // ivar: _command
@property (copy, nonatomic) NSString *dataClass; // ivar: _dataClass


+(BOOL)supportsSecureCoding;
-(id)additionalDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCommand:(id)arg0 dataClass:(id)arg1 parameters:(id)arg2 ;
-(id)partialResponseWithParameters:(id)arg0 ;
-(id)responseWithError:(id)arg0 parameters:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif