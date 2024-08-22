// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSVMEDIASOCIALADMINSTATUS_H
#define SSVMEDIASOCIALADMINSTATUS_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SSVMediaSocialAdminStatus : NSObject <NSSecureCoding>



@property (readonly, nonatomic, getter=isAdmin) BOOL admin; // ivar: _admin
@property (readonly, nonatomic) NSDate *dateUpdated; // ivar: _dateUpdated


+(BOOL)supportsSecureCoding;
-(id)initWithAdminStatus:(BOOL)arg0 dateUpdated:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif