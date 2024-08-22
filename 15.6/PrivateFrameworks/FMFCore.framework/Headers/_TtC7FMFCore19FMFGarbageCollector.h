// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC7FMFCORE19FMFGARBAGECOLLECTOR_H
#define _TTC7FMFCORE19FMFGARBAGECOLLECTOR_H

@class SwiftObject;



@interface _TtC7FMFCore19FMFGarbageCollector : SwiftObject {
    ? garbageCollectorIdentityKey;
    ? accountStore;
    ? isAccountVerificationPending;
    ? fmfAccountIdentifier;
    ? identifierQueue;
    ? delegate;
    ? paths;
}




-(void)scheduleAccountVerificationWithNotification:(id)arg0 ;


@end


#endif