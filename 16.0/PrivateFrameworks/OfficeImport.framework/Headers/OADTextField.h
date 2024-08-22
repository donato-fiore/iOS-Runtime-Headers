// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADTEXTFIELD_H
#define OADTEXTFIELD_H

@class NSString;


#import "OADTextRun.h"
#import "OADParagraphProperties.h"

@interface OADTextField : OADTextRun {
    NSString *mText;
    OADParagraphProperties *mParagraphProperties;
}




-(BOOL)isEmpty;
-(NSUInteger)characterCount;
-(id)init;
-(id)paragraphProperties;
-(id)text;
-(void)removeUnnecessaryOverrides;
-(void)setText:(id)arg0 ;


@end


#endif