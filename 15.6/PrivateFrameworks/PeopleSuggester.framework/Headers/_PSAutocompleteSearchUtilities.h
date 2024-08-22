// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSAUTOCOMPLETESEARCHUTILITIES_H
#define _PSAUTOCOMPLETESEARCHUTILITIES_H


#import <Foundation/Foundation.h>


@interface _PSAutocompleteSearchUtilities : NSObject



+(BOOL)searchString:(id)arg0 containsOnlyCharactersInSet:(id)arg1 ;
+(id)emojiCharacterSet;
+(struct _NSRange )rangeForSearchTerm:(id)arg0 inTarget:(id)arg1 tokenizedByCharacterSet:(id)arg2 ;


@end


#endif