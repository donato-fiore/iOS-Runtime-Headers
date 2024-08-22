// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKINTERNALREPRESENTATION_H
#define GKINTERNALREPRESENTATION_H

@protocol NSCoding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GKInternalRepresentation : NSObject <NSCoding, NSCopying, NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)codedPropertyKeys;
+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
-(id)_gkDescriptionWithChildren:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionSubstitutionMap;
-(id)initWithCoder:(id)arg0 ;
-(id)serverRepresentation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergePropertiesFrom:(id)arg0 ;


@end


#endif