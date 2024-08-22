// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMCLIENTUSAGEMETRICS_H
#define EDAMCLIENTUSAGEMETRICS_H

@class NSNumber, NSString;


#import "FATObject.h"

@interface EDAMClientUsageMetrics : FATObject

@property (retain, nonatomic) NSNumber *sessions; // ivar: _sessions
@property (retain, nonatomic) NSString *subjectConsumerKey; // ivar: _subjectConsumerKey
@property (retain, nonatomic) NSString *subjectConsumerSecret; // ivar: _subjectConsumerSecret


+(id)structFields;
+(id)structName;


@end


#endif