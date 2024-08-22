// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPUIWEBCOMPLETION_H
#define SPUIWEBCOMPLETION_H



#import "SPUICompletion.h"

@interface SPUIWebCompletion : SPUICompletion



+(BOOL)cardSectionIsWeb:(id)arg0 ;
+(BOOL)supportsResult:(id)arg0 cardSection:(id)arg1 ;
-(BOOL)completionResultIsPotentiallyPunchout;
-(id)image;
-(id)nonPrefixMatchExtensionString;
-(id)prefixMatchExtensionString;


@end


#endif