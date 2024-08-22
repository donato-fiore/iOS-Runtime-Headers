// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSNAPSHOTFILE_H
#define HMDSNAPSHOTFILE_H

@class HMFObject, NSNumber, NSString, NSData, NSDate;
@protocol HMFLogging;



@interface HMDSnapshotFile : HMFObject <HMFLogging>



@property (readonly) NSNumber *aspectRatio; // ivar: _aspectRatio
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *directory; // ivar: _directory
@property (readonly) NSData *encodedDataForIDSSend;
@property (readonly) BOOL externalFilePath; // ivar: _externalFilePath
@property (readonly) NSString *filePath; // ivar: _filePath
@property (getter=isFilled) BOOL filled; // ivar: _filled
@property (readonly) NSUInteger hash;
@property (copy) NSNumber *slotIdentifier; // ivar: _slotIdentifier
@property (readonly) NSDate *snapshotTimestamp; // ivar: _snapshotTimestamp
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)decodeIDSDataReceived:(id)arg0 snapshotDataTransaction:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)prepareParametersWithFilePath:(id)arg0 snapshotData:(id)arg1 directory:(id)arg2 snapshotTimestamp:(id)arg3 resize:(BOOL)arg4 writeBack:(BOOL)arg5 ;
-(id)attributeDescriptions;
-(id)copyFileAtPath:(id)arg0 snapshotTimestamp:(id)arg1 ;
-(id)initWithImageDirectory:(id)arg0 ;
-(id)initWithImageDirectory:(id)arg0 externalFilePath:(id)arg1 snapshotTimestamp:(id)arg2 ;
-(id)initWithImageDirectory:(id)arg0 filePath:(id)arg1 snapshotTimestamp:(id)arg2 ;
-(id)initWithImageDirectory:(id)arg0 snapshotData:(id)arg1 ;
-(id)logIdentifier;
-(void)clearSlot;
-(void)dealloc;
-(void)fillSlot;
-(void)updateSlotIdentifier;


@end


#endif