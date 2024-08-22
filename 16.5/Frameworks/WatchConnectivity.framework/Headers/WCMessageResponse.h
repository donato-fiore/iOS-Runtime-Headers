// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WCMESSAGERESPONSE_H
#define WCMESSAGERESPONSE_H

@class NSError;
@protocol NSSecureCoding;


#import "WCMessage.h"

@interface WCMessageResponse : WCMessage <NSSecureCoding>



@property (retain) NSError *error; // ivar: _error


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif