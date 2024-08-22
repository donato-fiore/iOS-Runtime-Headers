// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9AACCLIENTP33_EFD39109592C6EDA2BBCB1B6AD748AF525AECPOLICYACTIVATIONRUNNER_H
#define _TTC9AACCLIENTP33_EFD39109592C6EDA2BBCB1B6AD748AF525AECPOLICYACTIVATIONRUNNER_H

@class SwiftObject, NSString;
@protocol AEPolicyActivation;



@interface _TtC9AACClientP33_EFD39109592C6EDA2BBCB1B6AD748AF525AECPolicyActivationRunner : SwiftObject <AEPolicyActivation>

 {
    ? activation;
}


@property (nonatomic, readonly) NSInteger event;
@property (nonatomic, readonly) NSString *identifier;


-(id)deactivationForScratchpad:(id)arg0 ;
// -(void)activateWithScratchpad:(id)arg0 invalidationHandler:(id)arg1 completion:(unk)arg2  ;


@end


#endif