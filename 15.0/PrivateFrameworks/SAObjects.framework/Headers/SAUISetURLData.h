// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUISETURLDATA_H
#define SAUISETURLDATA_H

@class NSArray;


#import "SABaseClientBoundCommand.h"

@interface SAUISetURLData : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *urlData;


+(id)setURLData;
+(id)setURLDataWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif