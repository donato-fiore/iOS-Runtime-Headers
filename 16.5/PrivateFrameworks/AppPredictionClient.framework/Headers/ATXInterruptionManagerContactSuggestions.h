// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXINTERRUPTIONMANAGERCONTACTSUGGESTIONS_H
#define ATXINTERRUPTIONMANAGERCONTACTSUGGESTIONS_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXInterruptionManagerContactSuggestions : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSArray *candidateContacts; // ivar: _candidateContacts
@property (readonly, nonatomic) NSArray *recommendedContacts; // ivar: _recommendedContacts


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecommendedContacts:(id)arg0 candidateContacts:(id)arg1 ;
-(void)addCandidateContact:(id)arg0 ;
-(void)addRecommendedContact:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif