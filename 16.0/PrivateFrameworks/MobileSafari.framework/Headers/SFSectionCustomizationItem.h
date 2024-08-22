// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSECTIONCUSTOMIZATIONITEM_H
#define SFSECTIONCUSTOMIZATIONITEM_H

@class UIImage, NSString;

#import <Foundation/Foundation.h>


@interface SFSectionCustomizationItem : NSObject

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) UIImage *icon; // ivar: _icon
@property (readonly, nonatomic) id *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(id)itemWithIdentifier:(id)arg0 enabled:(BOOL)arg1 ;
+(id)itemWithIdentifier:(id)arg0 title:(id)arg1 icon:(id)arg2 enabled:(BOOL)arg3 ;
-(id)description;
-(id)itemWithEnabled:(BOOL)arg0 ;


@end


#endif