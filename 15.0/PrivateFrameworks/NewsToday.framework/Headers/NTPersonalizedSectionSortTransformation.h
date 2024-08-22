// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPERSONALIZEDSECTIONSORTTRANSFORMATION_H
#define NTPERSONALIZEDSECTIONSORTTRANSFORMATION_H

@class NSString, NSOrderedSet;
@protocol FCFeedTransforming;

#import <Foundation/Foundation.h>


@interface NTPersonalizedSectionSortTransformation : NSObject <FCFeedTransforming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSOrderedSet *mandatoryArticleIDs; // ivar: _mandatoryArticleIDs
@property (copy, nonatomic) NSOrderedSet *personalizedArticleIDs; // ivar: _personalizedArticleIDs
@property (retain, nonatomic) NSObject<FCFeedTransforming> *sortTransformation; // ivar: _sortTransformation
@property (readonly) Class superclass;


-(id)init;
-(id)initWithMandatoryArticleIDs:(id)arg0 personalizedArticleIDs:(id)arg1 sortTransformation:(id)arg2 ;
-(id)transformFeedItems:(id)arg0 ;


@end


#endif