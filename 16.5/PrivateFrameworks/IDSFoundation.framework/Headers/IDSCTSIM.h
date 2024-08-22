// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSCTSIM_H
#define IDSCTSIM_H

@class NSString, CTXPCServiceSubscriptionContext;
@protocol IDSCTSIM;

#import <Foundation/Foundation.h>


@interface IDSCTSIM : NSObject <IDSCTSIM>

 {
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
}


@property (readonly, nonatomic) NSString *SIMIdentifier;
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDefaultVoiceSIM;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *mobileCountryCode;
@property (readonly, nonatomic) NSString *mobileNetworkCode;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSUInteger slot;
@property (readonly) Class superclass;


-(id)initWithContext:(id)arg0 ;


@end


#endif