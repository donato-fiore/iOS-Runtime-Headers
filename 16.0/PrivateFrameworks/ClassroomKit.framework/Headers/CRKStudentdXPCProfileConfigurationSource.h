// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKSTUDENTDXPCPROFILECONFIGURATIONSOURCE_H
#define CRKSTUDENTDXPCPROFILECONFIGURATIONSOURCE_H

@class NSString;
@protocol CRKConfigurationSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CRKNonCatalystStudentDaemonProxy.h"

@interface CRKStudentdXPCProfileConfigurationSource : NSObject <CRKConfigurationSource>

 {
    NSObject<OS_dispatch_queue> *mCallbackQueue;
    id<CRKConfigurationSource> *mPlaceholderFileConfigurationSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CRKNonCatalystStudentDaemonProxy *studentDaemonProxy; // ivar: _studentDaemonProxy
@property (readonly) Class superclass;


-(BOOL)isStudentdInstalled;
-(id)init;
-(id)initWithCallbackQueue:(id)arg0 ;
-(void)fetchConfiguration:(id)arg0 ;
-(void)setConfiguration:(id)arg0 completion:(id)arg1 ;


@end


#endif