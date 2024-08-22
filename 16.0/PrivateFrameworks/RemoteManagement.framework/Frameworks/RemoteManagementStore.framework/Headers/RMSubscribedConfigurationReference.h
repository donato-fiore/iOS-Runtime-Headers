// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMSUBSCRIBEDCONFIGURATIONREFERENCE_H
#define RMSUBSCRIBEDCONFIGURATIONREFERENCE_H

@class NSArray, RMModelDeclarationBase;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RMSubscriberStore.h"

@interface RMSubscribedConfigurationReference : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *assets; // ivar: _assets
@property (readonly, nonatomic) RMModelDeclarationBase *declaration; // ivar: _declaration
@property (readonly, nonatomic) RMSubscriberStore *store; // ivar: _store


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToReference:(id)arg0 ;
-(id)assetWithIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeclaration:(id)arg0 subscriberStore:(id)arg1 assets:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif