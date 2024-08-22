// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SUAUTOINSTALLOPERATIONMODEL_H
#define _SUAUTOINSTALLOPERATIONMODEL_H

@class NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SUAutoInstallForecast.h"

@interface _SUAutoInstallOperationModel : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) int agreementStatus; // ivar: _agreementStatus
@property (retain, nonatomic) SUAutoInstallForecast *forecast; // ivar: _forecast
@property (retain, nonatomic) NSUUID *id; // ivar: _id


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif