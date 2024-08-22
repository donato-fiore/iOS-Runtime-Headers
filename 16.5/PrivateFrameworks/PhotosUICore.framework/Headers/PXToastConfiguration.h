// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXTOASTCONFIGURATION_H
#define PXTOASTCONFIGURATION_H

@class UIView, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXToastConfiguration : NSObject <NSCopying>



@property (nonatomic) CGFloat autoDismissalDelay; // ivar: _autoDismissalDelay
@property (nonatomic) CGFloat bottomMargin; // ivar: _bottomMargin
@property (nonatomic) BOOL canSwipeToDismiss; // ivar: _canSwipeToDismiss
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (copy, nonatomic) NSString *iconSystemImageName; // ivar: _iconSystemImageName
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (weak, nonatomic) UIView *sourceView; // ivar: _sourceView


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif