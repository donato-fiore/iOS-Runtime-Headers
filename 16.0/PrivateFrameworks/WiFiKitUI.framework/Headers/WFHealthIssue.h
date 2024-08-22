// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFHEALTHISSUE_H
#define WFHEALTHISSUE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFHealthIssue : NSObject

@property (nonatomic) NSUInteger category; // ivar: _category
@property (nonatomic) BOOL chinaDevice; // ivar: _chinaDevice
@property (copy, nonatomic) NSString *issueDescription; // ivar: _issueDescription
@property (readonly, nonatomic) NSString *issueDetailText;
@property (copy, nonatomic) NSString *issueRecommendation; // ivar: _issueRecommendation
@property (copy, nonatomic) NSString *issueShortTitle; // ivar: _issueShortTitle
@property (copy, nonatomic) NSString *issueTitle; // ivar: _issueTitle
@property (nonatomic) BOOL overrideIssue; // ivar: _overrideIssue
@property (readonly, nonatomic) BOOL subtitleOnlyIssue; // ivar: _subtitleOnlyIssue
@property (nonatomic) NSUInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *typeString; // ivar: _typeString


+(id)healthIssueSortComparator:(SEL)arg0 ;
+(id)highestPriorityIssueFromIssues:(id)arg0 ;
+(id)issueWithType:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHealthIssue:(id)arg0 ;
-(NSUInteger)_categoryForType:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionForType:(NSUInteger)arg0 ;
-(id)_recommendationForType:(NSUInteger)arg0 ;
-(id)_shortTitleForType:(NSUInteger)arg0 ;
-(id)_titleForType:(NSUInteger)arg0 ;
-(id)_typeStringForType:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithType:(NSUInteger)arg0 ;


@end


#endif