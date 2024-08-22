// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSAPPLICATIONRESULTBUILDER_H
#define SSAPPLICATIONRESULTBUILDER_H

@class NSString;


#import "SSResultBuilder.h"

@interface SSApplicationResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (retain, nonatomic) NSString *name; // ivar: _name


-(id)buildCompactCardSections;
-(id)buildResult;
-(id)initWithResult:(id)arg0 ;


@end


#endif