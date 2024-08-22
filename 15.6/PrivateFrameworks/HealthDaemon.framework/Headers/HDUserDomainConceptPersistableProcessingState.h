// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDUSERDOMAINCONCEPTPERSISTABLEPROCESSINGSTATE_H
#define HDUSERDOMAINCONCEPTPERSISTABLEPROCESSINGSTATE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HDUserDomainConceptPersistableProcessingState : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger anchor; // ivar: _anchor
@property (readonly, nonatomic) NSInteger maximumPropertyType; // ivar: _maximumPropertyType
@property (readonly, nonatomic) NSInteger ontologyVersion; // ivar: _ontologyVersion


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyByUpdatingAnchor:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAnchor:(NSInteger)arg0 ontologyVersion:(NSInteger)arg1 maximumPropertyType:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif