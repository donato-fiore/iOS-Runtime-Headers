// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATMESSAGE_H
#define ATMESSAGE_H

@class NSInputStream, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATCodableStream.h"

@interface ATMessage : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSInputStream *dataStream; // ivar: _dataStream
@property (nonatomic) unsigned int messageID; // ivar: _messageID
@property (nonatomic) unsigned int options;
@property (retain, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (nonatomic) unsigned int sessionID; // ivar: _sessionID
@property (retain, nonatomic) ATCodableStream *stream; // ivar: _stream
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)additionalDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)parameterForKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif