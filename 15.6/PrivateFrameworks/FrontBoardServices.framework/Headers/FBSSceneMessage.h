// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSSCENEMESSAGE_H
#define FBSSCENEMESSAGE_H

@class NSString, BSMutableKeyedSettings;
@protocol NSCopying, BSXPCCoding, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface FBSSceneMessage : NSObject <NSCopying, BSXPCCoding, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) BSMutableKeyedSettings *payload; // ivar: _payload
@property (readonly) Class superclass;


+(id)message;
-(Class)fallbackXPCEncodableClass;
-(id)_initWithPayload:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif