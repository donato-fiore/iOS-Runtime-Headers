// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHAPACCESSORYREADERWRITER_H
#define HMDHAPACCESSORYREADERWRITER_H

@class NSString;
@protocol HMFLogging, HMDHAPAccessoryReader, HMDHAPAccessoryWriter, HMDHAPAccessoryReaderWriterDataSource;

#import <Foundation/Foundation.h>

#import "HMDHome.h"
#import "HMDHAPAccessoryTaskTracker.h"

@interface HMDHAPAccessoryReaderWriter : NSObject <HMFLogging, HMDHAPAccessoryReader, HMDHAPAccessoryWriter>



@property (readonly) NSObject<HMDHAPAccessoryReaderWriterDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly) Class superclass;
@property (readonly) HMDHAPAccessoryTaskTracker *tracker; // ivar: _tracker


+(id)logCategory;
-(BOOL)_cannotForwardMessage:(id)arg0 ;
-(BOOL)_isNotResidentDevice;
-(BOOL)_isPrimaryResidentDevice;
-(BOOL)_isSecondaryResidentDevice;
-(id)_completionHandlerWithContext:(SEL)arg0 ;
-(id)_defaultTaskForCurrentDeviceWithContext:(id)arg0 requests:(id)arg1 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithHome:(id)arg0 dataSource:(id)arg1 ;
-(id)logIdentifier;
-(void)handleRemotelyUpdatedCharacteristicsMessage:(id)arg0 ;
-(void)submitReadRequests:(id)arg0 sourceType:(NSUInteger)arg1 requestMessage:(id)arg2 ;
-(void)submitWriteRequests:(id)arg0 sourceType:(NSUInteger)arg1 requestMessage:(id)arg2 ;


@end


#endif