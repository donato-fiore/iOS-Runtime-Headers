// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RUIPAGEELEMENT_H
#define RUIPAGEELEMENT_H

@class NSString;


#import "RUIElement.h"
#import "RUIPage.h"

@interface RUIPageElement : RUIElement

@property (nonatomic, getter=isLoading) BOOL loading;
@property (weak, nonatomic) RUIPage *page; // ivar: _page
@property (copy, nonatomic) NSString *title;


-(id)staticValues;


@end


#endif