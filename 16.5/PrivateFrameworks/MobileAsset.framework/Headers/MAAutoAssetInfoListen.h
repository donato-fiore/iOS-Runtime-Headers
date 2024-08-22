// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAAUTOASSETINFOLISTEN_H
#define MAAUTOASSETINFOLISTEN_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MAAutoAssetNotifications.h"

@interface MAAutoAssetInfoListen : NSObject <NSSecureCoding>



@property (readonly, nonatomic) MAAutoAssetNotifications *activeNotifications; // ivar: _activeNotifications


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNotifications:(id)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif