// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDATARECOVERYCONTROLLER_H
#define SBDATARECOVERYCONTROLLER_H

@class SBFMobileKeyBag;

#import <Foundation/Foundation.h>


@interface SBDataRecoveryController : NSObject {
    SBFMobileKeyBag *_mobileKeyBag;
}


@property (readonly, nonatomic) BOOL dataRecoveryRequired;


-(id)init;
-(id)initWithMobileKeyBag:(id)arg0 ;
-(void)performDataRecovery;


@end


#endif