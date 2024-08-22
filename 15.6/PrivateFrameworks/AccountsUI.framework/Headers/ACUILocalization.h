// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACUILOCALIZATION_H
#define ACUILOCALIZATION_H


#import <Foundation/Foundation.h>


@interface ACUILocalization : NSObject



+(id)localizedReferenceToLocalSourceOfDataclass:(id)arg0 ;
+(id)localizedStringForDataclass:(id)arg0 withSuffix:(id)arg1 forAccount:(id)arg2 ;
+(id)localizedTextForDataclasses:(id)arg0 usedAtBeginningOfSentence:(BOOL)arg1 ;
+(id)localizedTextForDataclasses:(id)arg0 usedAtBeginningOfSentence:(BOOL)arg1 forAccount:(id)arg2 ;
+(id)localizedTitleForDataclass:(id)arg0 ;
+(id)localizedTitleForDataclass:(id)arg0 forAccount:(id)arg1 ;
+(id)localizedTitleForLocalSourceOfDataclass:(id)arg0 usedAtBeginningOfSentence:(BOOL)arg1 ;


@end


#endif