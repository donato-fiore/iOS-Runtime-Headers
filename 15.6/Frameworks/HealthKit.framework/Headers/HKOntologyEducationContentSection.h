// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKONTOLOGYEDUCATIONCONTENTSECTION_H
#define HKONTOLOGYEDUCATIONCONTENTSECTION_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKOntologyEducationContentSection : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *attributions; // ivar: _attributions
@property (readonly, copy, nonatomic) NSArray *citations; // ivar: _citations
@property (readonly, copy, nonatomic) NSArray *localeIdentifiers; // ivar: _localeIdentifiers
@property (readonly, copy, nonatomic) NSString *localizedText; // ivar: _localizedText
@property (readonly, nonatomic) NSInteger ontologyContentVersion; // ivar: _ontologyContentVersion
@property (readonly, nonatomic) NSInteger propertyType; // ivar: _propertyType
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSArray *validRegionCodes; // ivar: _validRegionCodes


+(BOOL)supportsSecureCoding;
+(id)createFromPropertyRepresentation:(id)arg0 ;
+(id)createWithCodable:(id)arg0 ;
+(id)unitTesting_educationContentSectionWithType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)codableRepresentationForSync;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPropertyType:(NSInteger)arg0 ontologyContentVersion:(NSInteger)arg1 localizedText:(id)arg2 localeIdentifiers:(id)arg3 validRegionCodes:(id)arg4 attributions:(id)arg5 citations:(id)arg6 ;
-(id)propertyRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif