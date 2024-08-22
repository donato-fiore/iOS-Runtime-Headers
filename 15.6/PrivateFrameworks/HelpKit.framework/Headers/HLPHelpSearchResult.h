// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HLPHELPSEARCHRESULT_H
#define HLPHELPSEARCHRESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HLPHelpSearchResult : NSObject

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger matchCount; // ivar: _matchCount
@property (nonatomic) CGFloat relevanceScore; // ivar: _relevanceScore
@property (nonatomic) NSInteger weight; // ivar: _weight


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;


@end


#endif