// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRCOMPLICATIONGALLERYWIDGETITEM_H
#define PRCOMPLICATIONGALLERYWIDGETITEM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PRComplicationDescriptor.h"

@interface PRComplicationGalleryWidgetItem : NSObject

@property (readonly, nonatomic) PRComplicationDescriptor *descriptor; // ivar: _descriptor
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic, getter=isIconImageHidden) BOOL iconImageHidden; // ivar: _iconImageHidden
@property (readonly, nonatomic) NSInteger kind; // ivar: _kind
@property (readonly, nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly, nonatomic) NSString *text; // ivar: _text


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDisplayName:(id)arg0 selected:(BOOL)arg1 iconImageHidden:(BOOL)arg2 descriptor:(id)arg3 ;
-(id)initWithDisplayName:(id)arg0 selected:(BOOL)arg1 iconImageHidden:(BOOL)arg2 text:(id)arg3 kind:(NSInteger)arg4 ;


@end


#endif