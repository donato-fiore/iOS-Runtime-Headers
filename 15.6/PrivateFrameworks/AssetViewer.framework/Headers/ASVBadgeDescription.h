// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASVBADGEDESCRIPTION_H
#define ASVBADGEDESCRIPTION_H

@class UIImage;

#import <Foundation/Foundation.h>


@interface ASVBadgeDescription : NSObject

@property (readonly) UIImage *badgeImage; // ivar: _badgeImage
@property (readonly) CGPoint badgeOffset; // ivar: _badgeOffset
@property (readonly) CGSize badgeSize; // ivar: _badgeSize
@property (readonly) NSUInteger badgeSizeClass; // ivar: _badgeSizeClass
@property (readonly) CGFloat shadowSize; // ivar: _shadowSize


+(id)descriptionForSize:(struct CGSize )arg0 ;
-(id)initWithSizeClass:(NSUInteger)arg0 ;


@end


#endif