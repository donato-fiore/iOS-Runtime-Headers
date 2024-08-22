// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NNCLASTNEWSSTORYRESULT_H
#define NNCLASTNEWSSTORYRESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NNCLastNewsStoryResult : NSObject

@property (copy, nonatomic) NSString *excerpt; // ivar: _excerpt
@property (nonatomic) NSInteger family; // ivar: _family
@property (copy, nonatomic) NSString *headlineIdentifier; // ivar: _headlineIdentifier
@property (nonatomic) NSUInteger headlineIndex; // ivar: _headlineIndex
@property (copy, nonatomic) NSString *headlineTitle; // ivar: _headlineTitle
@property (copy, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (copy, nonatomic) NSString *sectionName; // ivar: _sectionName
@property (copy, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (copy, nonatomic) NSString *sourceName; // ivar: _sourceName
@property (nonatomic) NSUInteger totalHeadlineCount; // ivar: _totalHeadlineCount


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;


@end


#endif