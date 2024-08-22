// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTCELLULARPLANPROFILE_H
#define CTCELLULARPLANPROFILE_H

@class NSString, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCellularPlanProfile : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *iccid; // ivar: _iccid
@property (nonatomic) BOOL isBootstrap; // ivar: _isBootstrap
@property (nonatomic) BOOL isDeleteNotAllowed; // ivar: _isDeleteNotAllowed
@property (nonatomic) BOOL isDisableNotAllowed; // ivar: _isDisableNotAllowed
@property (nonatomic) BOOL isSelected; // ivar: _isSelected
@property (copy, nonatomic) NSData *profileId; // ivar: _profileId
@property (nonatomic) BOOL requiresUserConsent; // ivar: _requiresUserConsent


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProfileId:(id)arg0 iccid:(id)arg1 selected:(BOOL)arg2 bootstrap:(BOOL)arg3 disableNotAllowed:(BOOL)arg4 deleteNotAllowed:(BOOL)arg5 requiresUserConsent:(BOOL)arg6 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif