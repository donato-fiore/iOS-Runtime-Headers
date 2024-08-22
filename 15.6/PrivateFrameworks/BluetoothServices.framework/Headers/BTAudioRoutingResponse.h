// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BTAUDIOROUTINGRESPONSE_H
#define BTAUDIOROUTINGRESPONSE_H

@class NSString, NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BTAudioRoutingResponse : NSObject <NSSecureCoding>



@property (nonatomic) int action; // ivar: _action
@property (nonatomic) unsigned int clientID; // ivar: _clientID
@property (copy, nonatomic) NSString *deviceAddress; // ivar: _deviceAddress
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSString *reason; // ivar: _reason


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif