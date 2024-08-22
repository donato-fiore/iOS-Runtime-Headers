// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMACFILESEARCHVIEW_H
#define SAMACFILESEARCHVIEW_H

@class NSArray, NSString;


#import "SAAceView.h"

@interface SAMacFileSearchView : SAAceView

@property (copy, nonatomic) NSArray *entities;
@property (nonatomic) NSInteger numResults;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *searchTitle;


+(id)fileSearchView;
+(id)fileSearchViewWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif