// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAAUTHORIZATIONINFLIGHT_H
#define SAAUTHORIZATIONINFLIGHT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SAAuthorizationInFlight : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSString *fromBundleId; // ivar: _fromBundleId
@property (readonly, nonatomic, getter=getFromBundleLocalizedName) NSString *fromBundleLocalizedName; // ivar: fromBundleLocalizedName
@property (nonatomic, getter=isInFlight) BOOL inFlight; // ivar: _inFlight
@property (nonatomic) NSInteger preflightAuthorizationStatus; // ivar: _preflightAuthorizationStatus
@property (retain, nonatomic) NSString *toBundleId; // ivar: _toBundleId
@property (readonly, nonatomic, getter=getToBundleLocalizedName) NSString *toBundleLocalizedName; // ivar: toBundleLocalizedName


+(id)sharedInstance;
-(id)description;
-(void)reset;


@end


#endif