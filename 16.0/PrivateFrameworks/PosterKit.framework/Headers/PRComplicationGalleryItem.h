// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRCOMPLICATIONGALLERYITEM_H
#define PRCOMPLICATIONGALLERYITEM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PRComplicationDescriptor.h"

@interface PRComplicationGalleryItem : NSObject

@property (readonly, nonatomic) PRComplicationDescriptor *descriptor; // ivar: _descriptor
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic, getter=isIconImageHidden) BOOL iconImageHidden; // ivar: _iconImageHidden
@property (readonly, nonatomic) NSInteger kind; // ivar: _kind
@property (readonly, nonatomic) NSString *text; // ivar: _text


-(id)initWithDisplayName:(id)arg0 iconImageHidden:(BOOL)arg1 descriptor:(id)arg2 ;
-(id)initWithDisplayName:(id)arg0 iconImageHidden:(BOOL)arg1 text:(id)arg2 kind:(NSInteger)arg3 ;


@end


#endif