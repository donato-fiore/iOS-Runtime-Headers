// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIREPORTACONCERNCONFIGURATION_H
#define SKUIREPORTACONCERNCONFIGURATION_H

@class NSString, NSArray, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIReportAConcernConfiguration : NSObject <NSCopying>



@property (nonatomic) NSInteger itemIdentifier; // ivar: _itemIdentifier
@property (copy, nonatomic) NSString *privacyNote; // ivar: _privacyNote
@property (copy, nonatomic) NSArray *reasons; // ivar: _reasons
@property (copy, nonatomic) NSString *reportConcernExplanation; // ivar: _reportConcernExplanation
@property (copy, nonatomic) NSURL *reportConcernURL; // ivar: _reportConcernURL
@property (copy, nonatomic) NSString *selectReasonSubtitle; // ivar: _selectReasonSubtitle
@property (copy, nonatomic) NSString *selectReasonTitle; // ivar: _selectReasonTitle


+(id)configurationWithTemplateElement:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif