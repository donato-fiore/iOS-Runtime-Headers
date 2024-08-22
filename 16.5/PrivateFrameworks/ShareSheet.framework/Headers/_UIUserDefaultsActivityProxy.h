// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIUSERDEFAULTSACTIVITYPROXY_H
#define _UIUSERDEFAULTSACTIVITYPROXY_H

@class NSUUID, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UIUserDefaultsActivityProxy : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSUUID *activityUUID; // ivar: _activityUUID
@property (nonatomic) BOOL canEdit; // ivar: _canEdit
@property (nonatomic) BOOL canHide; // ivar: _canHide
@property (nonatomic) BOOL canMove; // ivar: _canMove
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (retain, nonatomic) NSNumber *imageSlot; // ivar: _imageSlot
@property (nonatomic) BOOL isHidden; // ivar: _isHidden
@property (retain, nonatomic) NSNumber *labelSlot; // ivar: _labelSlot
@property (nonatomic) CGFloat platterTextHeight; // ivar: _platterTextHeight


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif