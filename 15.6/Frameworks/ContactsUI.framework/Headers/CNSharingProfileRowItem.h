// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNSHARINGPROFILEROWITEM_H
#define CNSHARINGPROFILEROWITEM_H

@class UIView, NSString;

#import <Foundation/Foundation.h>


@interface CNSharingProfileRowItem : NSObject

@property (readonly, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (nonatomic) BOOL isSelected; // ivar: _isSelected
@property (readonly, nonatomic) NSString *label; // ivar: _label


-(id)initWithLabel:(id)arg0 accessoryView:(id)arg1 ;


@end


#endif