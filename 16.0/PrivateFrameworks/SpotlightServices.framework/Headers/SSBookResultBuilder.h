// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSBOOKRESULTBUILDER_H
#define SSBOOKRESULTBUILDER_H

@class NSString, NSDate;


#import "SSResultBuilder.h"

@interface SSBookResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *author; // ivar: _author
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSString *genre; // ivar: _genre


+(BOOL)isCoreSpotlightResult;
+(id)bundleId;
-(id)buildCompactCardSection;
-(id)initWithResult:(id)arg0 ;


@end


#endif