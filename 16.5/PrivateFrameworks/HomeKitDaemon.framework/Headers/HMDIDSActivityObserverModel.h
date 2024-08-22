// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDIDSACTIVITYOBSERVERMODEL_H
#define HMDIDSACTIVITYOBSERVERMODEL_H

@class HMBModel, NSData;



@interface HMDIDSActivityObserverModel : HMBModel

@property (retain, nonatomic) NSData *pushToken;


+(id)hmbProperties;
+(id)sentinelParentUUID;
-(id)initWithModelID:(id)arg0 ;


@end


#endif