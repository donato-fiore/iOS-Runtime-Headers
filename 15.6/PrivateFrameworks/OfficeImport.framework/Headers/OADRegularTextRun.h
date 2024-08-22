// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADREGULARTEXTRUN_H
#define OADREGULARTEXTRUN_H

@class NSMutableString;


#import "OADTextRun.h"

@interface OADRegularTextRun : OADTextRun {
    NSMutableString *mText;
}




-(BOOL)isEmpty;
-(BOOL)isSimilarToTextRun:(id)arg0 ;
-(NSUInteger)characterCount;
-(id)init;
-(id)text;


@end


#endif