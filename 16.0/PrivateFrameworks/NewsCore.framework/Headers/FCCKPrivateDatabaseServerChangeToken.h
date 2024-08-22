// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKPRIVATEDATABASESERVERCHANGETOKEN_H
#define FCCKPRIVATEDATABASESERVERCHANGETOKEN_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FCCKPrivateDatabaseServerChangeToken : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDictionary *changeTokensByDestinationKey; // ivar: _changeTokensByDestinationKey


+(BOOL)supportsSecureCoding;
+(id)_keyForDestination:(NSInteger)arg0 ;
+(id)tokenByAddingCKToken:(id)arg0 forDestination:(NSInteger)arg1 toToken:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)changeTokenForDestination:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithChangeTokensByDestination:(id)arg0 ;
-(id)initWithChangeTokensByDestinationKey:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif