// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUIUPDATEVISUALRESPONSESNIPPET_H
#define SAUIUPDATEVISUALRESPONSESNIPPET_H

@class NSData, NSString;


#import "SABaseClientBoundCommand.h"

@interface SAUIUpdateVisualResponseSnippet : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *stateData;
@property (copy, nonatomic) NSString *viewId;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif