// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKSCREENOBSERVATIONMONITOR_H
#define CRKSCREENOBSERVATIONMONITOR_H

@class NSDictionary;
@protocol CRKDarwinNotificationPublisher, CRKScreenObservationMonitorDelegate, CRKCancelable, CRKFeatureDataStoreProtocol, CRKObservation, CRKStudentConnection, CRKStudentConnectionPrimitives;

#import <Foundation/Foundation.h>

#import "CRKFetchObservingInstructorsByCourseOperation.h"

@interface CRKScreenObservationMonitor : NSObject

@property (nonatomic, getter=isConnecting) BOOL connecting; // ivar: _connecting
@property (readonly, nonatomic) NSObject<CRKDarwinNotificationPublisher> *darwinNotificationPublisher; // ivar: _darwinNotificationPublisher
@property (weak, nonatomic) NSObject<CRKScreenObservationMonitorDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<CRKCancelable> *enrollmentStatusDidChangeSubscription; // ivar: _enrollmentStatusDidChangeSubscription
@property (readonly, nonatomic) NSObject<CRKFeatureDataStoreProtocol> *featureDataStore; // ivar: _featureDataStore
@property (retain, nonatomic) CRKFetchObservingInstructorsByCourseOperation *fetchObservingInstructorsByCourseOperation; // ivar: _fetchObservingInstructorsByCourseOperation
@property (readonly, nonatomic) BOOL hasObservingInstructors;
@property (retain, nonatomic) NSObject<CRKObservation> *observersDidChangeObservation; // ivar: _observersDidChangeObservation
@property (copy, nonatomic) NSDictionary *observingInstructorsByCourse; // ivar: _observingInstructorsByCourse
@property (retain, nonatomic) NSObject<CRKStudentConnection> *studentConnection; // ivar: _studentConnection
@property (readonly, nonatomic) NSObject<CRKStudentConnectionPrimitives> *studentConnectionPrimitives; // ivar: _studentConnectionPrimitives


+(BOOL)automaticallyNotifiesObserversOfObservingInstructorsByCourse;
+(id)keyPathsForValuesAffectingHasObservingInstructors;
-(id)init;
-(id)initWithStudentConnectionPrimitives:(id)arg0 darwinNotificationPublisher:(id)arg1 featureDataStore:(id)arg2 ;
-(id)instructorIdentifiersByCourseIdentifier;
-(void)beginObservingEnrollmentStatus;
-(void)connectToStudentdIfNeeded;
-(void)dealloc;
-(void)didEstablishStudentConnection:(id)arg0 ;
-(void)didLoseStudentConnection;
-(void)disconnectFromStudentdIfNeeded;
-(void)enrollmentStatusDidChange;
-(void)fetchObservingInstructorsByCourse;
-(void)fetchObservingInstructorsByCourseOperationDidFinish:(id)arg0 ;


@end


#endif