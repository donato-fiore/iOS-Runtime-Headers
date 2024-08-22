// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKCURRENTPLATFORMINSTRUCTORDTRANSPORTPROVIDER_H
#define CRKCURRENTPLATFORMINSTRUCTORDTRANSPORTPROVIDER_H

@class NSURL, NSString;
@protocol CRKTransportProviding;

#import <Foundation/Foundation.h>


@interface CRKCurrentPlatformInstructordTransportProvider : NSObject <CRKTransportProviding>

 {
    id<CRKTransportProviding> *mBaseProvider;
}


@property (retain, nonatomic) NSURL *classroomAppBundleURL; // ivar: _classroomAppBundleURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *instructordBundleIdentifier; // ivar: _instructordBundleIdentifier
@property (readonly) Class superclass;


-(id)init;
-(id)initWithStudentDaemonProxy:(id)arg0 ;
-(id)initWithStudentDaemonProxy:(id)arg0 classroomAppBundleURL:(id)arg1 ;
-(id)initWithStudentDaemonProxy:(id)arg0 classroomAppBundleURL:(id)arg1 instructordBundleIdentifier:(id)arg2 ;
-(id)makeProviderForCurrentPlatformWithStudentDaemonProxy:(id)arg0 ;
-(void)fetchTransportWithCompletion:(id)arg0 ;


@end


#endif