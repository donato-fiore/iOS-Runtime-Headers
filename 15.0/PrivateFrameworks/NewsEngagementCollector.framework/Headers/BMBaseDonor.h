// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMBASEDONOR_H
#define BMBASEDONOR_H

@class NSArray, NSString;
@protocol BMDonor;

#import <Foundation/Foundation.h>


@interface BMBaseDonor : NSObject <BMDonor>

 {
    ? type;
    ? eventConfigurations;
    ? observations;
}


@property (nonatomic, copy) NSArray *eventConfigurations;
@property (nonatomic, copy) NSString *type;


-(id)init;
-(void)donateWithConfiguration:(id)arg0 context:(id)arg1 donationCompleteBlock:(id)arg2 ;


@end


#endif