// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAVCSADDRESULTSTOCONTENTSHELF_H
#define SAVCSADDRESULTSTOCONTENTSHELF_H

@class NSString, NSArray;


#import "SAUIAddContentToView.h"

@interface SAVCSAddResultsToContentShelf : SAUIAddContentToView

@property (copy, nonatomic) NSString *contentShelfViewId;
@property (copy, nonatomic) NSArray *fetchMoreResultsCommands;
@property (nonatomic) NSInteger pageNumber;
@property (copy, nonatomic) NSArray *results;


+(id)addResultsToContentShelf;
+(id)addResultsToContentShelfWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif