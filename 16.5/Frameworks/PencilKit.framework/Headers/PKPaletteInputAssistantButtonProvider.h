// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPALETTEINPUTASSISTANTBUTTONPROVIDER_H
#define PKPALETTEINPUTASSISTANTBUTTONPROVIDER_H

@class UITextInputAssistantItem;

#import <Foundation/Foundation.h>


@interface PKPaletteInputAssistantButtonProvider : NSObject

@property (copy, nonatomic) id *inclusionFilter; // ivar: _inclusionFilter
@property (retain, nonatomic) UITextInputAssistantItem *inputAssistantItem; // ivar: _inputAssistantItem


-(BOOL)_shouldIncludeBarButtonItem:(id)arg0 ;
-(id)_nonSystemBarButtonItemGroups;
-(id)buttonsForCurrentConfiguration;
-(id)init;
-(id)initWithInputAssistantItem:(id)arg0 ;


@end


#endif