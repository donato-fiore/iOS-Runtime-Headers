// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIWEBCOMPLETION_H
#define SEARCHUIWEBCOMPLETION_H



#import "SearchUICompletion.h"

@interface SearchUIWebCompletion : SearchUICompletion



+(BOOL)cardSectionIsWeb:(id)arg0 ;
+(BOOL)supportsResult:(id)arg0 cardSection:(id)arg1 ;
-(BOOL)completionResultIsPotentiallyPunchout;
-(id)image;
-(id)nonPrefixMatchExtensionString;
-(id)prefixMatchExtensionString;


@end


#endif