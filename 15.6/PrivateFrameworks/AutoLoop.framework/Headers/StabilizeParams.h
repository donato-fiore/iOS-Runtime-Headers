// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STABILIZEPARAMS_H
#define STABILIZEPARAMS_H


#import <Foundation/Foundation.h>


@interface StabilizeParams : NSObject {
    vector<SP_FrameInfo, std::allocator<SP_FrameInfo>> mFrameInfo;
    ? mFrameTimeArray;
}


@property CGRect cropRect; // ivar: cropRect
@property (readonly) unsigned int numFrames; // ivar: numFrames
@property BOOL passThrough; // ivar: passThrough
@property ? roiLength; // ivar: roiLength
@property ? roiStart; // ivar: roiStart
@property BOOL sparseFrames; // ivar: sparseFrames
@property (readonly) unsigned int version; // ivar: version


+(id)stabilizeParams;
+(id)stabilizeParamsFromNSDictionary:(id)arg0 ;
+(id)stabilizeParamsFromURL:(id)arg0 ;
-(*void)frameTimes;
-(BOOL)writeToURL:(id)arg0 ;
-(id)infoAsDict;
-(id)init;
-(id)initFromDict:(id)arg0 ;
-(struct ? )timeForFrame:(unsigned int)arg0 ;
-(void)append:(struct ? *)arg0 ;
-(void)getFrameInfo:(unsigned int)arg0 frameInfo:(struct ? *)arg1 ;


@end


#endif