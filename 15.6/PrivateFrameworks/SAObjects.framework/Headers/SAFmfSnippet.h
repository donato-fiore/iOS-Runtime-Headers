// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAFMFSNIPPET_H
#define SAFMFSNIPPET_H

@class NSData;


#import "SAUISnippet.h"

@interface SAFmfSnippet : SAUISnippet

@property (copy, nonatomic) NSData *modelData;


-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif