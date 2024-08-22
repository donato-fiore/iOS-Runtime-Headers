// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPMESSAGELISTITEMLEADINGCONFIGURATION_H
#define CPMESSAGELISTITEMLEADINGCONFIGURATION_H

@class UIImage;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CPImageSet.h"

@interface CPMessageListItemLeadingConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) UIImage *leadingImage;
@property (retain, nonatomic) CPImageSet *leadingImageSet; // ivar: _leadingImageSet
@property (readonly, nonatomic) NSInteger leadingItem; // ivar: _leadingItem
@property (readonly, nonatomic, getter=isUnread) BOOL unread; // ivar: _unread


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLeadingItem:(NSInteger)arg0 leadingImage:(id)arg1 unread:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif