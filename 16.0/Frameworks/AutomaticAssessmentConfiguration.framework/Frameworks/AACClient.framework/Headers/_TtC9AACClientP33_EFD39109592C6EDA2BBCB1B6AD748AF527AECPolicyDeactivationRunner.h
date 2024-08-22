// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9AACCLIENTP33_EFD39109592C6EDA2BBCB1B6AD748AF527AECPOLICYDEACTIVATIONRUNNER_H
#define _TTC9AACCLIENTP33_EFD39109592C6EDA2BBCB1B6AD748AF527AECPOLICYDEACTIVATIONRUNNER_H

@class SwiftObject, NSString;
@protocol AEPolicyDeactivation;



@interface _TtC9AACClientP33_EFD39109592C6EDA2BBCB1B6AD748AF527AECPolicyDeactivationRunner : SwiftObject <AEPolicyDeactivation>

 {
    ? deactivation;
}


@property (nonatomic, readonly) NSInteger event;
@property (nonatomic, readonly) NSString *identifier;


-(void)deactivateWithCompletion:(id)arg0 ;


@end


#endif