// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTCELLULARPLANITEM_H
#define CTCELLULARPLANITEM_H

@class NSString, NSUUID, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTCellularPlan.h"
#import "CTUserLabel.h"

@interface CTCellularPlanItem : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_name;
    NSString *_iccid;
}


@property (readonly, nonatomic) NSString *carrierName;
@property (copy, nonatomic) NSString *companionSimLabelId; // ivar: _companionSimLabelId
@property (copy, nonatomic) NSUUID *companionSlotUuid; // ivar: _companionSlotUuid
@property (readonly, nonatomic) NSString *iccid;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isActiveDataPlan; // ivar: _isActiveDataPlan
@property (readonly, nonatomic) BOOL isBackedByCellularPlan;
@property (nonatomic) BOOL isDefaultVoice; // ivar: _isDefaultVoice
@property (readonly, nonatomic) BOOL isInstalling;
@property (nonatomic) BOOL isLocalTransferToeSIMSupported; // ivar: _isLocalTransferToeSIMSupported
@property (nonatomic) BOOL isSelectable; // ivar: _isSelectable
@property (readonly, nonatomic) BOOL isSelected;
@property (retain, nonatomic) NSNumber *isSelectedOverride; // ivar: _isSelectedOverride
@property (nonatomic) BOOL isSimStateValid; // ivar: _isSimStateValid
@property (nonatomic) BOOL isTransferred; // ivar: _isTransferred
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSInteger lockState; // ivar: _lockState
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly, nonatomic) CTCellularPlan *plan; // ivar: _plan
@property (nonatomic) BOOL shouldAppearDisabled; // ivar: _shouldAppearDisabled
@property (nonatomic) BOOL shouldAutoSelectWhenInRange; // ivar: _shouldAutoSelectWhenInRange
@property (nonatomic) BOOL shouldDisplay; // ivar: _shouldDisplay
@property (nonatomic) BOOL shouldDisplayExtendedConsentInfo; // ivar: _shouldDisplayExtendedConsentInfo
@property (nonatomic) BOOL shouldDisplayType; // ivar: _shouldDisplayType
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) CTUserLabel *userLabel; // ivar: _userLabel
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customDescription;
-(id)description;
-(id)initWithCellularPlan:(id)arg0 uuid:(id)arg1 ;
-(id)initWithCellularPlan:(id)arg0 uuid:(id)arg1 iccid:(id)arg2 name:(id)arg3 type:(NSInteger)arg4 phoneNumber:(id)arg5 label:(id)arg6 ;
-(id)initWithCellularPlan:(id)arg0 uuid:(id)arg1 iccid:(id)arg2 name:(id)arg3 type:(NSInteger)arg4 phoneNumber:(id)arg5 label:(id)arg6 isLocalTransferToeSIMSupported:(BOOL)arg7 isTransferred:(BOOL)arg8 ;
-(id)initWithCellularPlan:(id)arg0 uuid:(id)arg1 type:(NSInteger)arg2 phoneNumber:(id)arg3 label:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIccid:(id)arg0 uuid:(id)arg1 name:(id)arg2 phoneNumber:(id)arg3 label:(id)arg4 ;
-(id)initWithIccid:(id)arg0 uuid:(id)arg1 name:(id)arg2 phoneNumber:(id)arg3 label:(id)arg4 isLocalTransferToeSIMSupported:(BOOL)arg5 ;
-(id)initWithIccid:(id)arg0 uuid:(id)arg1 name:(id)arg2 phoneNumber:(id)arg3 label:(id)arg4 isLocalTransferToeSIMSupported:(BOOL)arg5 isTransferred:(BOOL)arg6 ;
-(id)redactedDescription;
-(id)typeAsString:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif