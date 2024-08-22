// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMADPARAMETERS_H
#define EDAMADPARAMETERS_H

@class NSString, NSDictionary, NSArray, NSNumber;


#import "FATObject.h"

@interface EDAMAdParameters : FATObject

@property (retain, nonatomic) NSString *clientLanguage; // ivar: _clientLanguage
@property (retain, nonatomic) NSDictionary *clientProperties; // ivar: _clientProperties
@property (retain, nonatomic) NSArray *impressions; // ivar: _impressions
@property (retain, nonatomic) NSNumber *supportHtml; // ivar: _supportHtml


+(id)structFields;
+(id)structName;


@end


#endif