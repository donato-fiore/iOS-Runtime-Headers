// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTEXTENGINEDELEGATE_H
#define TSTTEXTENGINEDELEGATE_H

@protocol TSWPTextDelegate;

#import <Foundation/Foundation.h>

#import "TSWPPadding.h"

@interface TSTTextEngineDelegate : NSObject <TSWPTextDelegate>

 {
    TSWPPadding *mPadding;
    unsigned int mVerticalAlignment;
}




-(BOOL)forceWesternLineBreaking;
-(id)initWithPadding:(struct UIEdgeInsets )arg0 verticalAlignment:(unsigned int)arg1 ;
-(id)padding;
-(unsigned int)verticalAlignment;
-(void)dealloc;


@end


#endif