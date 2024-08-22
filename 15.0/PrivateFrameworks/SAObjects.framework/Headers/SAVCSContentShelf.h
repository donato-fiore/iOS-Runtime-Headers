// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAVCSCONTENTSHELF_H
#define SAVCSCONTENTSHELF_H

@class NSArray, NSString, NSURL;


#import "SAAceView.h"

@interface SAVCSContentShelf : SAAceView

@property (copy, nonatomic) NSArray *contentHead;
@property (copy, nonatomic) NSArray *fetchMoreResultsCommands;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *url;


+(id)contentShelf;
+(id)contentShelfWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif