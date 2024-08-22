// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKEVENTSTREAM_H
#define _DKEVENTSTREAM_H

@class NSString;
@protocol _DKProtobufConverting, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_CDEventStreamProperties.h"
#import "_DKObjectType.h"

@interface _DKEventStream : NSObject <_DKProtobufConverting, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) _CDEventStreamProperties *eventProperties; // ivar: _eventProperties
@property (readonly) _DKObjectType *eventValueType; // ivar: _eventValueType
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)eventStreamWithName:(id)arg0 ;
+(id)eventStreamWithName:(id)arg0 valueType:(id)arg1 ;
+(id)fromPBCodable:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 valueType:(id)arg1 cache:(id)arg2 ;
-(id)toPBCodable;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif