// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHTSWPTEXTWITHDELEGATE_H
#define TSCHTSWPTEXTWITHDELEGATE_H

@class TSWPText;

#import <Foundation/Foundation.h>

#import "TSCHTSWPTextDelegate.h"

@interface TSCHTSWPTextWithDelegate : NSObject

@property (retain, nonatomic) TSWPText *text; // ivar: _text
@property (retain, nonatomic) TSCHTSWPTextDelegate *textDelegate; // ivar: _textDelegate


-(id)initWithText:(id)arg0 textDelegate:(id)arg1 ;


@end


#endif