// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPERSONALIZEDSECTIONLIMITTRANSFORMATION_H
#define NTPERSONALIZEDSECTIONLIMITTRANSFORMATION_H

@class NSString, NSOrderedSet;
@protocol FCFeedTransforming;

#import <Foundation/Foundation.h>


@interface NTPersonalizedSectionLimitTransformation : NSObject <FCFeedTransforming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (copy, nonatomic) NSOrderedSet *mandatoryArticleIDs; // ivar: _mandatoryArticleIDs
@property (copy, nonatomic) NSOrderedSet *personalizedArticleIDs; // ivar: _personalizedArticleIDs
@property (readonly) Class superclass;


-(id)init;
-(id)initWithMandatoryArticleIDs:(id)arg0 personalizedArticleIDs:(id)arg1 limit:(NSUInteger)arg2 ;
-(id)transformFeedItems:(id)arg0 ;


@end


#endif