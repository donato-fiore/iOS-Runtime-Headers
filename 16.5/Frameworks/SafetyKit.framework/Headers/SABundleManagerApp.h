// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SABUNDLEMANAGERAPP_H
#define SABUNDLEMANAGERAPP_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface SABundleManagerApp : NSObject

@property (retain, nonatomic) NSDate *authorizationDate; // ivar: _authorizationDate
@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *pairedBundleId; // ivar: _pairedBundleId


-(id)getLocalizedName;
-(id)initWithBundleId:(id)arg0 deviceType:(NSInteger)arg1 ;
-(void)getLocalizedNameForPairedDeviceWithCompletion:(id)arg0 ;


@end


#endif