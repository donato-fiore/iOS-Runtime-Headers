// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSNEWSRESULTBUILDER_H
#define SSNEWSRESULTBUILDER_H

@class NSString, NSDate;


#import "SSResultBuilder.h"

@interface SSNewsResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *newsSource; // ivar: _newsSource
@property (retain, nonatomic) NSDate *publishedDate; // ivar: _publishedDate
@property (retain, nonatomic) NSString *subTitle; // ivar: _subTitle
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)isCoreSpotlightResult;
+(id)bundleId;
+(id)newsFootnoteWithNewsSource:(id)arg0 publishedDate:(id)arg1 ;
-(id)buildInlineCardSection;
-(id)initWithResult:(id)arg0 ;


@end


#endif