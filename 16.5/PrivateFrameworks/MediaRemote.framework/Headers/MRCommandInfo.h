// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRCOMMANDINFO_H
#define MRCOMMANDINFO_H

@class NSData, NSDictionary;

#import <Foundation/Foundation.h>

#import "_MRCommandInfoProtobuf.h"

@interface MRCommandInfo : NSObject

@property (nonatomic) unsigned int command; // ivar: _command
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly, copy, nonatomic) NSData *propertyListData;
@property (readonly, nonatomic) _MRCommandInfoProtobuf *protobuf;


+(BOOL)isCommandActuallySupportedEvenWhenDisabled:(unsigned int)arg0 ;
+(id)commandInfosFromData:(id)arg0 ;
+(id)dataFromCommandInfos:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithData:(id)arg0 ;
-(id)initWithPropertyListData:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;


@end


#endif