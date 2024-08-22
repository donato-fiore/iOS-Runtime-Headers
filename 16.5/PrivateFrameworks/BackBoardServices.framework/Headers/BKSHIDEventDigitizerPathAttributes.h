// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKSHIDEVENTDIGITIZERPATHATTRIBUTES_H
#define BKSHIDEVENTDIGITIZERPATHATTRIBUTES_H

@class NSString;
@protocol BSProtobufSerializable, NSCopying, BSDescriptionStreamable;

#import <Foundation/Foundation.h>

#import "BKSHIDEventAuthenticationMessage.h"

@interface BKSHIDEventDigitizerPathAttributes : NSObject <BSProtobufSerializable, NSCopying, BSDescriptionStreamable>



@property (retain, nonatomic) BKSHIDEventAuthenticationMessage *authenticationMessage; // ivar: _authenticationMessage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint hitTestLocation; // ivar: _hitTestLocation
@property (nonatomic) CGFloat hitTestLocationX;
@property (nonatomic) CGFloat hitTestLocationY;
@property (nonatomic) unsigned char locus; // ivar: _locus
@property (nonatomic) NSInteger pathIndex; // ivar: _pathIndex
@property (nonatomic) CGPoint preciseLocation; // ivar: _preciseLocation
@property (nonatomic) CGFloat preciseLocationX;
@property (nonatomic) CGFloat preciseLocationY;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int touchIdentifier; // ivar: _touchIdentifier
@property (nonatomic) unsigned int userIdentifier; // ivar: _userIdentifier
@property (nonatomic) float zGradient; // ivar: _zGradient


+(id)protobufSchema;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;


@end


#endif