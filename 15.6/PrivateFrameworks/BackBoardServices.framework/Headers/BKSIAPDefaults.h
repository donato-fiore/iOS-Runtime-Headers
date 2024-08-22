// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSIAPDEFAULTS_H
#define BKSIAPDEFAULTS_H

@class BSAbstractDefaultDomain, NSString;



@interface BKSIAPDefaults : BSAbstractDefaultDomain

@property (readonly, nonatomic) NSString *videoTVOutReservedForIPodOut;
@property (readonly, nonatomic) NSString *videoTVOutReservedForRemoteUI;
@property (readonly, nonatomic) NSString *videoTVOutSignal;
@property (retain, nonatomic) NSString *videoTVOutSystem;


-(id)init;
-(void)_bindAndRegisterDefaults;


@end


#endif