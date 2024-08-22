// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAFMFLOCATIONSNIPPET_H
#define SAFMFLOCATIONSNIPPET_H

@class NSNumber, NSArray, NSString, NSURL;


#import "SAUISnippet.h"

@interface SAFmfLocationSnippet : SAUISnippet

@property (copy, nonatomic) NSNumber *atRequestedLocation;
@property (copy, nonatomic) NSArray *locations;
@property (copy, nonatomic) NSString *proximity;
@property (copy, nonatomic) NSURL *searchContext;


+(id)locationSnippet;
+(id)locationSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif