// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPPARAGRAPHLISTITEM_H
#define CPPARAGRAPHLISTITEM_H

@protocol CPDisposable;

#import <Foundation/Foundation.h>

#import "CPList.h"

@interface CPParagraphListItem : NSObject <CPDisposable>

 {
    *__CFArray paragraphs;
}


@property (retain, nonatomic) CPList *list; // ivar: list
@property (nonatomic) int number; // ivar: number


-(id)init;
-(id)paragraphAtIndex:(unsigned int)arg0 ;
-(unsigned int)paragraphCount;
-(void)addParagraph:(id)arg0 ;
-(void)dealloc;
-(void)dispose;
-(void)finalize;


@end


#endif