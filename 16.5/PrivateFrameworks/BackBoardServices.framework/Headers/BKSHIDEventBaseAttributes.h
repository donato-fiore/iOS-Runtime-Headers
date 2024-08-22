// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKSHIDEVENTBASEATTRIBUTES_H
#define BKSHIDEVENTBASEATTRIBUTES_H

@class NSString;
@protocol BSDescriptionProviding, BSProtobufSerializable, NSCopying, BSDescriptionStreamable;

#import <Foundation/Foundation.h>

#import "BKSHIDEventAuthenticationMessage.h"
#import "BKSHIDEventDisplay.h"
#import "BKSHIDEventDeferringEnvironment.h"
#import "BKSHIDEventDeferringToken.h"

@interface BKSHIDEventBaseAttributes : NSObject <BSDescriptionProviding, BSProtobufSerializable, NSCopying, BSDescriptionStreamable>



@property (retain, nonatomic) BKSHIDEventAuthenticationMessage *authenticationMessage; // ivar: _authenticationMessage
@property (readonly, nonatomic) unsigned int contextID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BKSHIDEventDisplay *display; // ivar: _display
@property (retain, nonatomic) BKSHIDEventDeferringEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned short options; // ivar: _options
@property (nonatomic) int source; // ivar: _source
@property (readonly) Class superclass;
@property (retain, nonatomic) BKSHIDEventDeferringToken *token; // ivar: _token


+(id)baseAttributesFromProvider:(id)arg0 ;
+(id)protobufSchema;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)appendDescriptionToFormatter:(id)arg0 ;


@end


#endif