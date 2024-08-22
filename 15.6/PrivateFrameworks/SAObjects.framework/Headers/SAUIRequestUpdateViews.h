// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUIREQUESTUPDATEVIEWS_H
#define SAUIREQUESTUPDATEVIEWS_H

@class NSArray, NSNumber;


#import "SABaseClientBoundCommand.h"

@interface SAUIRequestUpdateViews : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSNumber *timeInSeconds;
@property (copy, nonatomic) NSArray *viewIds;


+(id)requestUpdateViews;
+(id)requestUpdateViewsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif