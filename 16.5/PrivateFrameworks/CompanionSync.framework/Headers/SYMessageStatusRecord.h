// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYMESSAGESTATUSRECORD_H
#define SYMESSAGESTATUSRECORD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SYMessageStatusRecord : NSObject

@property (nonatomic) BOOL applicationACKReceived; // ivar: _applicationACKReceived
@property (nonatomic) BOOL deviceACKReceived; // ivar: _deviceACKReceived
@property (readonly, nonatomic) BOOL isComplete;
@property (copy, nonatomic) NSString *messageID; // ivar: _messageID
@property (nonatomic) BOOL responseReceived; // ivar: _responseReceived


-(id)debugDescription;
-(id)description;
-(id)initFiller;
-(id)initWithMessageID:(id)arg0 ;


@end


#endif