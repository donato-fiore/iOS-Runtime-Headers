// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEOASSETWRITERDELEGATEADAPTER_H
#define HMIVIDEOASSETWRITERDELEGATEADAPTER_H

@class HMFObject, NSString;
@protocol HMIVideoAssetWriterDelegate;



@interface HMIVideoAssetWriterDelegateAdapter : HMFObject <HMIVideoAssetWriterDelegate>



@property (copy) id *assetWriterDidFailWithError; // ivar: _assetWriterDidFailWithError
@property (copy) id *assetWriterDidOutputInitializationSegment; // ivar: _assetWriterDidOutputInitializationSegment
@property (copy) id *assetWriterDidOutputSeparableSegment; // ivar: _assetWriterDidOutputSeparableSegment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)assetWriter:(id)arg0 didFailWithError:(id)arg1 ;
-(void)assetWriter:(id)arg0 didOutputInitializationSegment:(id)arg1 ;
-(void)assetWriter:(id)arg0 didOutputSeparableSegment:(id)arg1 segmentReport:(id)arg2 ;


@end


#endif