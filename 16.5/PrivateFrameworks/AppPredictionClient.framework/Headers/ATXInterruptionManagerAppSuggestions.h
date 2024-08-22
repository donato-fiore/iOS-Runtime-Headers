// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXINTERRUPTIONMANAGERAPPSUGGESTIONS_H
#define ATXINTERRUPTIONMANAGERAPPSUGGESTIONS_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXInterruptionManagerAppSuggestions : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSArray *candidateApps; // ivar: _candidateApps
@property (readonly, nonatomic) NSArray *recommendedApps; // ivar: _recommendedApps


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecommendedApps:(id)arg0 candidateApps:(id)arg1 ;
-(void)addCandidateApp:(id)arg0 ;
-(void)addRecommendedApp:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif