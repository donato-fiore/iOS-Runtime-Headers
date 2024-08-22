// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSHEETOPTIONSVIEWCONTEXT_H
#define SHSHEETOPTIONSVIEWCONTEXT_H

@class NSArray, UIViewController;

#import <Foundation/Foundation.h>


@interface SHSheetOptionsViewContext : NSObject

@property (copy, nonatomic) NSArray *customizationGroups; // ivar: _customizationGroups
@property (weak, nonatomic) UIViewController *itemPreviewViewController; // ivar: _itemPreviewViewController


-(id)description;
-(id)initWithCustomizationGroups:(id)arg0 ;


@end


#endif