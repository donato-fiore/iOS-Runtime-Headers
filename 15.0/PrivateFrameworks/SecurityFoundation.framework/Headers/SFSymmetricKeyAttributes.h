// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSYMMETRICKEYATTRIBUTES_H
#define SFSYMMETRICKEYATTRIBUTES_H

@class NSString;
@protocol _SFKeyAttributes, SFKeychainItemAttributes;

#import <Foundation/Foundation.h>

#import "_SFKeySpecifier.h"

@interface SFSymmetricKeyAttributes : NSObject <_SFKeyAttributes, SFKeychainItemAttributes>

 {
    id *_symmetricKeyAttributesInternal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *keyDomain;
@property (readonly, copy, nonatomic) _SFKeySpecifier *keySpecifier;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *localizedLabel;
@property (readonly, copy, nonatomic) NSString *persistentIdentifier; // ivar: persistentIdentifier
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSpecifier:(id)arg0 ;
-(id)initWithSpecifier:(id)arg0 domain:(id)arg1 ;


@end


#endif