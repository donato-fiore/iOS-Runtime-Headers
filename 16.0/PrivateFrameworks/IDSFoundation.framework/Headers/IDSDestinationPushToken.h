// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSDESTINATIONPUSHTOKEN_H
#define IDSDESTINATIONPUSHTOKEN_H

@class NSString, NSData;


#import "IDSDestination.h"

@interface IDSDestinationPushToken : IDSDestination

@property (readonly, nonatomic) NSString *alias; // ivar: _alias
@property (readonly, nonatomic) NSData *pushToken; // ivar: _pushToken


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)destinationURIs;
-(id)initWithAlias:(id)arg0 pushToken:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif