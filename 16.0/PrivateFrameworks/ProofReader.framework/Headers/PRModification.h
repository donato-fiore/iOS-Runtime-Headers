// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRMODIFICATION_H
#define PRMODIFICATION_H


#import <Foundation/Foundation.h>


@interface PRModification : NSObject



-(CGFloat)modificationScore;
-(NSUInteger)modificationType;
-(id)replacementString;
-(struct _NSRange )additionalSyllableRange;
-(struct _NSRange )range;
-(struct _NSRange )syllableRange;


@end


#endif