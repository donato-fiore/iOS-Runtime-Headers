// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFFOLDERPICKERITEM_H
#define _SFFOLDERPICKERITEM_H

@class WebBookmark, NSString;

#import <Foundation/Foundation.h>


@interface _SFFolderPickerItem : NSObject

@property (readonly, nonatomic) WebBookmark *bookmark; // ivar: _bookmark
@property (readonly, nonatomic) NSUInteger depth; // ivar: _depth
@property (readonly, nonatomic) NSString *title;


-(id)_initWithBookmark:(id)arg0 depth:(NSUInteger)arg1 ;


@end


#endif