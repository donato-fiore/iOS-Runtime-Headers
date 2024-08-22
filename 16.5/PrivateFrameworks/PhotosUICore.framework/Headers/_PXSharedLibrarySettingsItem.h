// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXSHAREDLIBRARYSETTINGSITEM_H
#define _PXSHAREDLIBRARYSETTINGSITEM_H

@class UIView, UIImage, NSString;

#import <Foundation/Foundation.h>


@interface _PXSharedLibrarySettingsItem : NSObject

@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (nonatomic) SEL action; // ivar: _action
@property (retain, nonatomic) UIView *customView; // ivar: _customView
@property (copy, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) BOOL refusesSelection; // ivar: _refusesSelection
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)itemWithTitle:(id)arg0 ;


@end


#endif