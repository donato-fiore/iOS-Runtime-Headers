// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMITORSOPRINTER_H
#define HMITORSOPRINTER_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMITorsoprinter : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)currentTorsoRequestRevision;
+(id)currentModelUUID;
+(id)logCategory;
+(struct __CVBuffer *)createTorsoPixelBufferForTorsoEvent:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 error:(*id)arg2 ;
-(id)torsoprintForTorsoPixelBuffer:(struct __CVBuffer *)arg0 unrecognizable:(BOOL)arg1 error:(*id)arg2 ;


@end


#endif