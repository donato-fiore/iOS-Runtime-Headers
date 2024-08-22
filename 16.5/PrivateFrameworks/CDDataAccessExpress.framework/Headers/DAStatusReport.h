// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DASTATUSREPORT_H
#define DASTATUSREPORT_H

@class NSString, NSNumber, NSDate;

#import <Foundation/Foundation.h>


@interface DAStatusReport : NSObject

@property (retain, nonatomic) NSString *accountType; // ivar: _accountType
@property (retain, nonatomic) NSNumber *averageHBI; // ivar: _averageHBI
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSNumber *downloadedElements; // ivar: _downloadedElements
@property (retain, nonatomic) NSNumber *failedNetworkRequests; // ivar: _failedNetworkRequests
@property (retain, nonatomic) NSNumber *failedProtocolRequests; // ivar: _failedProtocolRequests
@property (retain, nonatomic) NSNumber *falseMoreAvailableCount; // ivar: _falseMoreAvailableCount
@property (retain, nonatomic) NSNumber *isDelegate; // ivar: _isDelegate
@property (retain, nonatomic) NSDate *lastFailureDate; // ivar: _lastFailureDate
@property (retain, nonatomic) NSDate *lastSuccessDate; // ivar: _lastSuccessDate
@property (nonatomic) int numHBIDataPoints; // ivar: _numHBIDataPoints
@property (retain, nonatomic) NSString *persistentUUID; // ivar: _persistentUUID
@property (retain, nonatomic) NSString *protocolVersion; // ivar: _protocolVersion
@property (retain, nonatomic) NSNumber *successfulRequests; // ivar: _successfulRequests
@property (nonatomic) BOOL syncingAllowed; // ivar: _syncingAllowed
@property (retain, nonatomic) NSNumber *timeInNetworking; // ivar: _timeInNetworking
@property (retain, nonatomic) NSNumber *timeSpan; // ivar: _timeSpan
@property (retain, nonatomic) NSNumber *uploadedElements; // ivar: _uploadedElements


-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(void)mergeStatusReport:(id)arg0 ;
-(void)noteFailedNetworkRequest;
-(void)noteFailedProtocolRequest;
-(void)noteFalseMoreAvailableResponse;
-(void)noteNewHBIDataPoint:(int)arg0 ;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg0 ;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg0 numUploadedElements:(int)arg1 ;
-(void)noteTimeSpentInNetworking:(CGFloat)arg0 ;


@end


#endif