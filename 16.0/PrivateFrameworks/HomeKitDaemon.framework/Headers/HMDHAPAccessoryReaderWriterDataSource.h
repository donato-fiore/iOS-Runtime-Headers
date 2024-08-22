// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHAPACCESSORYREADERWRITERDATASOURCE_H
#define HMDHAPACCESSORYREADERWRITERDATASOURCE_H

@class HMFObject, NSString;
@protocol HMDHAPAccessoryReaderWriterDataSource;



@interface HMDHAPAccessoryReaderWriterDataSource : HMFObject <HMDHAPAccessoryReaderWriterDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, getter=isWholeHomeBluetoothSupported) BOOL wholeHomeBluetoothSupported;




@end


#endif