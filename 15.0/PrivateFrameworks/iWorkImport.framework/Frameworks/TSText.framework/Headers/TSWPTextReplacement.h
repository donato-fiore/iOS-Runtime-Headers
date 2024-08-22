// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPTEXTREPLACEMENT_H
#define TSWPTEXTREPLACEMENT_H

@class NSString;
@protocol TSWPReplaceAction;

#import <Foundation/Foundation.h>

#import "TSWPSelection.h"

@interface TSWPTextReplacement : NSObject <TSWPReplaceAction>

 {
    TSWPSelection *_selection;
    NSString *_string;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)delta;
-(NSUInteger)targetCharIndex;
-(id)initWithSelection:(id)arg0 string:(id)arg1 ;
-(struct _NSRange )insertedRange;
-(void)performWithStorage:(id)arg0 delta:(NSInteger)arg1 actionBuilder:(struct TSWPStorageActionBuilder *)arg2 withFlags:(unsigned int)arg3 replaceBlock:(id)arg4 ;


@end


#endif