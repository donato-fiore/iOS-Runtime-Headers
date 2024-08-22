// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMINIDISCOVERYCARD_H
#define PKMINIDISCOVERYCARD_H



#import "PKDiscoveryCard.h"

@interface PKMiniDiscoveryCard : PKDiscoveryCard

@property (readonly, nonatomic) NSInteger miniCardTemplateType; // ivar: _miniCardTemplateType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif