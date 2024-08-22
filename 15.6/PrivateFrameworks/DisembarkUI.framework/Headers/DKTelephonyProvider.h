// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DKTELEPHONYPROVIDER_H
#define DKTELEPHONYPROVIDER_H

@class NSString;
@protocol DKTelephonyProvider;

#import <Foundation/Foundation.h>


@interface DKTelephonyProvider : NSObject <DKTelephonyProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)cellularPlans;


@end


#endif