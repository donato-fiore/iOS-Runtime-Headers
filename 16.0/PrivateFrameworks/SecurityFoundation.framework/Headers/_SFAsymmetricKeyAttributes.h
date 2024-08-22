// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFASYMMETRICKEYATTRIBUTES_H
#define _SFASYMMETRICKEYATTRIBUTES_H

@class NSString;
@protocol _SFKeyAttributes;

#import <Foundation/Foundation.h>

#import "_SFKeySpecifier.h"

@interface _SFAsymmetricKeyAttributes : NSObject <_SFKeyAttributes>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *keyDomain; // ivar: _asymmetricKeyDomain
@property (readonly, copy, nonatomic) _SFKeySpecifier *keySpecifier; // ivar: _asymmetricKeySpecifier
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSpecifier:(id)arg0 ;
-(id)initWithSpecifier:(id)arg0 domain:(id)arg1 ;


@end


#endif