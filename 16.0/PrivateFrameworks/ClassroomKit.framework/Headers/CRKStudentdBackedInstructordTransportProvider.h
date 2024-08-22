// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKSTUDENTDBACKEDINSTRUCTORDTRANSPORTPROVIDER_H
#define CRKSTUDENTDBACKEDINSTRUCTORDTRANSPORTPROVIDER_H

@class NSURL, NSString;
@protocol CRKTransportProviding, CRKRequestPerformingProtocol;

#import <Foundation/Foundation.h>


@interface CRKStudentdBackedInstructordTransportProvider : NSObject <CRKTransportProviding>



@property (retain, nonatomic) NSURL *classroomAppBundleURL; // ivar: _classroomAppBundleURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *instructordBundleIdentifier; // ivar: _instructordBundleIdentifier
@property (retain, nonatomic) NSObject<CRKRequestPerformingProtocol> *studentDaemonProxy; // ivar: _studentDaemonProxy
@property (readonly) Class superclass;


-(id)init;
-(id)initWithStudentDaemonProxy:(id)arg0 ;
-(id)initWithStudentDaemonProxy:(id)arg0 classroomAppBundleURL:(id)arg1 ;
-(id)initWithStudentDaemonProxy:(id)arg0 classroomAppBundleURL:(id)arg1 instructordBundleIdentifier:(id)arg2 ;
-(void)fetchTransportOperationDidFinish:(id)arg0 completion:(id)arg1 ;
-(void)fetchTransportWithCompletion:(id)arg0 ;


@end


#endif