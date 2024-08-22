// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASIDENTIFIERMANAGER_H
#define ASIDENTIFIERMANAGER_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface ASIdentifierManager : NSObject

@property (readonly, nonatomic) NSUUID *advertisingIdentifier;
@property (readonly, nonatomic, getter=isAdvertisingTrackingEnabled) BOOL advertisingTrackingEnabled;


+(id)sharedManager;
-(BOOL)isUserOptedIn;
-(void)clearAdvertisingIdentifier;


@end


#endif