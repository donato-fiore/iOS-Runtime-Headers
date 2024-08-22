// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELGENERICOBJECTKIND_H
#define MPMODELGENERICOBJECTKIND_H

@class NSDictionary;


#import "MPModelKind.h"

@interface MPModelGenericObjectKind : MPModelKind

@property (readonly, nonatomic) NSDictionary *relationshipKinds; // ivar: _relationshipKinds


+(BOOL)supportsSecureCoding;
+(id)identityKind;
+(id)kindWithRelationshipKinds:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)humanDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif