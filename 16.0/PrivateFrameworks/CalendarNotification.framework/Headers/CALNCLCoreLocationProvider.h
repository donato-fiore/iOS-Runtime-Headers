// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNCLCORELOCATIONPROVIDER_H
#define CALNCLCORELOCATIONPROVIDER_H

@class NSString;
@protocol CALNCoreLocationProvider;

#import <Foundation/Foundation.h>


@interface CALNCLCoreLocationProvider : NSObject <CALNCoreLocationProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)preciseLocationAuthorizedForBundle:(id)arg0 ;
-(BOOL)preciseLocationAuthorizedForBundleIdentifier:(id)arg0 ;
-(int)authorizationStatusForBundle:(id)arg0 ;
-(int)authorizationStatusForBundleIdentifier:(id)arg0 ;
-(void)markAsHavingReceivedLocationWithEffectiveBundleIdentifier:(id)arg0 ;


@end


#endif