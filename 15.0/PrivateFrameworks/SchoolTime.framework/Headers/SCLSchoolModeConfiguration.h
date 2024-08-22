// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCLSCHOOLMODECONFIGURATION_H
#define SCLSCHOOLMODECONFIGURATION_H

@class NSXPCListenerEndpoint, NSString, NSUUID;
@protocol NSCopying, SCLSchoolModeDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SCLSchoolModeConfiguration : NSObject <NSCopying>

 {
    NSXPCListenerEndpoint *_testingEndpoint;
}


@property (weak, nonatomic) NSObject<SCLSchoolModeDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL loadsSynchronously; // ivar: _loadsSynchronously
@property (copy, nonatomic) NSUUID *pairingID; // ivar: _pairingID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // ivar: _targetQueue
@property (retain, nonatomic) NSXPCListenerEndpoint *testingEndpoint;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif