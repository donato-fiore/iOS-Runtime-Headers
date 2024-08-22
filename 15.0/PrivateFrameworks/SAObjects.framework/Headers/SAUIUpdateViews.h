// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUIUPDATEVIEWS_H
#define SAUIUPDATEVIEWS_H

@class NSArray;


#import "SABaseClientBoundCommand.h"

@interface SAUIUpdateViews : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *views;


+(id)updateViews;
+(id)updateViewsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif