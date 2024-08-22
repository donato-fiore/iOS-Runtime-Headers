// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDBLOCK_H
#define WDBLOCK_H


#import <Foundation/Foundation.h>

#import "WDText.h"

@interface WDBlock : NSObject {
    WDText *mText;
}




-(BOOL)isEmpty;
-(id)description;
-(id)document;
-(id)init;
-(id)initWithText:(id)arg0 ;
-(id)newRunIterator;
-(id)runIterator;
-(id)text;
-(int)blockType;
-(int)textType;
-(void)clearProperties;


@end


#endif