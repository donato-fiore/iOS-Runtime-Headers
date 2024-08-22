// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SADONATESIRIQUERYTOPORTRAIT_H
#define SADONATESIRIQUERYTOPORTRAIT_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SADonateSiriQueryToPortrait : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *originalQuery;
@property (copy, nonatomic) NSString *qid;
@property (nonatomic) NSInteger rank;
@property (nonatomic) CGFloat rankerConfidence;


+(id)donateSiriQueryToPortrait;
+(id)donateSiriQueryToPortraitWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif