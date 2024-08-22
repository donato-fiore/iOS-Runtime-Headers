// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRETEMPLATE_H
#define HRETEMPLATE_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>


@interface HRETemplate : NSObject

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSSet *involvedAccessoryTypes;
@property (readonly, nonatomic) Class recommendationClass;
@property (retain, nonatomic) NSSet *rules; // ivar: _rules
@property (nonatomic) CGFloat sortingPriority; // ivar: _sortingPriority
@property (nonatomic) NSUInteger splitStrategy; // ivar: _splitStrategy
@property (nonatomic) CGFloat starterRank; // ivar: _starterRank
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)createStarterRecommendationInHome:(id)arg0 ;
-(id)init;


@end


#endif