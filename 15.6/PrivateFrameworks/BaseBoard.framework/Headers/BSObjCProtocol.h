// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSOBJCPROTOCOL_H
#define BSOBJCPROTOCOL_H

@class NSArray, NSString, Protocol;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface BSObjCProtocol : NSObject <NSCopying, BSDescriptionProviding>

 {
    NSArray *_inheritedProtocols;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *inheritedProtocols;
@property (readonly, copy, nonatomic) NSArray *methods; // ivar: _methods
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, retain, nonatomic) Protocol *protocol; // ivar: _protocol
@property (readonly) Class superclass;


+(id)protocolForProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)flattenWithIgnoredInheritedProtocols:(id)arg0 ;
-(id)inheritedProtocolForProtocol:(id)arg0 ;
-(id)init;
-(id)methodForSelector:(SEL)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif