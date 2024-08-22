// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HLPLOADINFO_H
#define HLPLOADINFO_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "HLPHelpTopicItem.h"

@interface HLPLoadInfo : NSObject

@property (readonly, nonatomic) NSInteger accessType; // ivar: _accessType
@property (nonatomic) BOOL analyticsLogged; // ivar: _analyticsLogged
@property (readonly, nonatomic) NSString *analyticsSourceType;
@property (readonly, nonatomic) NSString *anchor; // ivar: _anchor
@property (readonly, nonatomic) HLPHelpTopicItem *helpTopicItem; // ivar: _helpTopicItem
@property (readonly, nonatomic) NSArray *searchTerms; // ivar: _searchTerms


+(id)infoWithTopicItem:(id)arg0 accesstype:(NSInteger)arg1 searchTerms:(id)arg2 anchor:(id)arg3 ;
-(id)_initWithTopicItem:(id)arg0 accessType:(NSInteger)arg1 searchTerms:(id)arg2 anchor:(id)arg3 ;


@end


#endif