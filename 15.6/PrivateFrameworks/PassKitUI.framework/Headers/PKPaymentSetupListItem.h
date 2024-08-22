// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPLISTITEM_H
#define PKPAYMENTSETUPLISTITEM_H

@class NSString, UIImage;
@protocol NSCopying, PKIdentifiable;

#import <Foundation/Foundation.h>


@interface PKPaymentSetupListItem : NSObject <NSCopying, PKIdentifiable>



@property (retain, nonatomic) NSString *badgeText; // ivar: _badgeText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayChevron; // ivar: _displayChevron
@property (nonatomic) BOOL displayInfo; // ivar: _displayInfo
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *labelText; // ivar: _labelText
@property (nonatomic) BOOL loadingIndicatorVisible; // ivar: _loadingIndicatorVisible
@property (nonatomic) BOOL reserverSpaceForSelectedAccessory; // ivar: _reserverSpaceForSelectedAccessory
@property (nonatomic) BOOL selected; // ivar: _selected
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 icon:(id)arg2 ;


@end


#endif