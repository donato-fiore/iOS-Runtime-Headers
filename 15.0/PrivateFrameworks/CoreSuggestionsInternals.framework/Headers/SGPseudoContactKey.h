// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGPSEUDOCONTACTKEY_H
#define SGPSEUDOCONTACTKEY_H

@class NSString;
@protocol SGEntityKey;

#import <Foundation/Foundation.h>

#import "SGIdentityKey.h"

@interface SGPseudoContactKey : NSObject <SGEntityKey>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SGIdentityKey *identityKey; // ivar: _identityKey
@property (readonly) Class superclass;


+(BOOL)isSupportedEntityType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPseudoContactKey:(id)arg0 ;
-(id)initWithEmail:(id)arg0 ;
-(id)initWithIdentityKey:(id)arg0 ;
-(id)initWithNormalizedEmail:(id)arg0 ;
-(id)initWithSerialized:(id)arg0 ;
-(id)serialize;


@end


#endif