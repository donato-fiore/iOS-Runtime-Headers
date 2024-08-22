// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAVCSCONTENTCABINET_H
#define SAVCSCONTENTCABINET_H

@class NSNumber, NSArray;


#import "SAUISnippet.h"

@interface SAVCSContentCabinet : SAUISnippet

@property (nonatomic) BOOL browseResults;
@property (copy, nonatomic) NSNumber *fullScreenEnabled;
@property (copy, nonatomic) NSArray *shelves;


+(id)contentCabinet;
+(id)contentCabinetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif