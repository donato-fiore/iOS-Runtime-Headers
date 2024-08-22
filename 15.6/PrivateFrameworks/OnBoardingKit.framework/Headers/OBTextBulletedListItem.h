// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OBTEXTBULLETEDLISTITEM_H
#define OBTEXTBULLETEDLISTITEM_H



#import "OBBulletedListItem.h"

@interface OBTextBulletedListItem : OBBulletedListItem



-(BOOL)shouldLayoutVertically;
-(CGFloat)imageSizeForImage:(id)arg0 ;
-(CGFloat)leadingMargins;
-(CGFloat)trailingMargins;
-(id)initWithTitle:(id)arg0 description:(id)arg1 image:(id)arg2 accessoryButton:(id)arg3 ;


@end


#endif