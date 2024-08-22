// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUITOGGLESTATEITEM_H
#define SKUITOGGLESTATEITEM_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIToggleStateItem : NSObject <NSCopying>



@property (nonatomic) NSInteger count; // ivar: _count
@property (copy, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (copy, nonatomic) NSString *nonToggleString; // ivar: _nonToggledString
@property (nonatomic) char toggled; // ivar: _toggled
@property (copy, nonatomic) NSString *toggledString; // ivar: _toggledString


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif