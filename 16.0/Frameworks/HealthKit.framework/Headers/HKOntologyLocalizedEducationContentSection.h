// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKONTOLOGYLOCALIZEDEDUCATIONCONTENTSECTION_H
#define HKONTOLOGYLOCALIZEDEDUCATIONCONTENTSECTION_H

@class NSArray, NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKOntologyLocalizedEducationContentSection : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *attributions;
@property (readonly, copy, nonatomic) NSArray *citations;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localeIdentifier;
@property (readonly, copy, nonatomic) NSString *localizedText;
@property (readonly, copy, nonatomic) NSArray *sectionData;
@property (readonly, copy, nonatomic) NSDictionary *sectionDataTypeMapping; // ivar: _sectionDataTypeMapping
@property (readonly, nonatomic) NSInteger sectionType; // ivar: _sectionType
@property (readonly, copy, nonatomic) NSArray *validRegionCodes;


+(BOOL)supportsSecureCoding;
+(id)sectionByMerging:(id)arg0 sectionToMergeFrom:(id)arg1 options:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_arrayOfStringOfTypeOrNil:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSectionDataTypeMapping:(id)arg0 sectionType:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif