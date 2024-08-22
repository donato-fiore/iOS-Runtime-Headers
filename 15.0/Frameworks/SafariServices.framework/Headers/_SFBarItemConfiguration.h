// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFBARITEMCONFIGURATION_H
#define _SFBARITEMCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _SFBarItemConfiguration : NSObject

@property (nonatomic) NSInteger badge; // ivar: _badge
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (copy, nonatomic) id *menuProvider; // ivar: _menuProvider
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)init;


@end


#endif