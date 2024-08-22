// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRSDASHBOARDFOCUSABLEITEM_H
#define CRSDASHBOARDFOCUSABLEITEM_H

@class UIView<CRSUIDashboardFocusableItemProviding>, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRSDashboardFocusableItem : NSObject <NSSecureCoding>



@property (weak, nonatomic) UIView<CRSUIDashboardFocusableItemProviding> *focusProvidingItem; // ivar: _focusProvidingItem
@property (nonatomic) CGRect frameInWindow; // ivar: _frameInWindow
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFocusableView:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif