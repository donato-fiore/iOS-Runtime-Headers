// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCARRIERSPACEINFO_H
#define CTCARRIERSPACEINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTCarrierSpaceAppsInfo.h"
#import "CTCarrierSpacePlansInfo.h"
#import "CTCarrierSpaceUsageInfo.h"

@interface CTCarrierSpaceInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) CTCarrierSpaceAppsInfo *appsInfo; // ivar: _appsInfo
@property (retain, nonatomic) CTCarrierSpacePlansInfo *plansInfo; // ivar: _plansInfo
@property (retain, nonatomic) CTCarrierSpaceUsageInfo *usageInfo; // ivar: _usageInfo


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif