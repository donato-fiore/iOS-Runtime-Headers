// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUISHOWMORECOMPLETION_H
#define SEARCHUISHOWMORECOMPLETION_H



#import "SearchUICompletion.h"

@interface SearchUIShowMoreCompletion : SearchUICompletion



+(BOOL)resultIsContact:(id)arg0 ;
+(BOOL)resultIsStoreSheet:(id)arg0 ;
+(BOOL)supportsResult:(id)arg0 cardSection:(id)arg1 ;
-(id)image;
-(id)prefixMatchExtensionString;


@end


#endif