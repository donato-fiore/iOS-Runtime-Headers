// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSECUREELEMENTAPPLET_H
#define PKSECUREELEMENTAPPLET_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKSecureElementApplet : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL containsSubKeys; // ivar: _containsSubKeys
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger lifecycleState; // ivar: _lifecycleState
@property (readonly, nonatomic, getter=isLocked) BOOL locked; // ivar: _locked
@property (readonly, nonatomic) NSString *packageIdentifier; // ivar: _packageIdentifier


+(BOOL)supportsSecureCoding;
+(id)secureElementAppletWithInternalApplet:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 lifecycleState:(NSUInteger)arg1 ;
-(id)initWithIdentifier:(id)arg0 packageIdentifier:(id)arg1 lifecycleState:(NSUInteger)arg2 ;
-(id)initWithIdentifier:(id)arg0 packageIdentifier:(id)arg1 lifecycleState:(NSUInteger)arg2 locked:(BOOL)arg3 containsSubKeys:(BOOL)arg4 ;
-(id)jsonDictionaryRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif