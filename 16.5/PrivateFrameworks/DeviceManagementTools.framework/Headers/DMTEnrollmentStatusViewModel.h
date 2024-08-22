// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMTENROLLMENTSTATUSVIEWMODEL_H
#define DMTENROLLMENTSTATUSVIEWMODEL_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DMTEnrollmentStatusViewModel : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (readonly, copy, nonatomic) NSString *statusMessage; // ivar: _statusMessage
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)detailTextWithOrganizationName:(id)arg0 organizationType:(NSInteger)arg1 localizedDeviceClass:(id)arg2 ;
+(id)statusMessageForEnrollmentState:(NSInteger)arg0 networkName:(id)arg1 ;
+(id)titleWithLocalizedDeviceClass:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOrganizationName:(id)arg0 organizationType:(NSInteger)arg1 localizedDeviceClass:(id)arg2 enrollmentState:(NSInteger)arg3 networkName:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif