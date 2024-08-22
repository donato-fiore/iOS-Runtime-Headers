// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPCNNBLURANALYZER_H
#define VCPCNNBLURANALYZER_H



#import "VCPImageAnalyzer.h"

@interface VCPCNNBlurAnalyzer : VCPImageAnalyzer {
    NSUInteger _revision;
}


@property BOOL sdof; // ivar: _sdof


+(id)analyzer;
+(id)analyzerWithRevision:(NSUInteger)arg0 ;
-(*float)getInputBuffer:(int)arg0 srcWidth:(int)arg1 cnnInputHeight:(*int)arg2 cnnInputWidth:(*int)arg3 ;
-(NSUInteger)getRevision;
-(float)calculateScoreFromNetworkOutput:(*float)arg0 outChannel:(int)arg1 outHeight:(int)arg2 outWidth:(int)arg3 textureness:(char *)arg4 contrast:(float)arg5 imgWidth:(int)arg6 ;
-(id)init;
-(id)initWithRevision:(NSUInteger)arg0 ;
-(int)computeCNNBasedSharpness:(struct __CVBuffer *)arg0 sharpnessScore:(*float)arg1 textureScore:(*float)arg2 contrast:(float)arg3 cancel:(id)arg4 ;
-(int)computeSharpnessScore:(*float)arg0 textureness:(char *)arg1 contrast:(float)arg2 imgWidth:(int)arg3 cancel:(id)arg4 ;
-(int)prepareModelForSourceWidth:(int)arg0 andSourceHeight:(int)arg1 ;
-(int)scaleRegion:(struct CGRect *)arg0 ofImage:(struct __CVBuffer *)arg1 toData:(*float)arg2 withWidth:(int)arg3 andHeight:(int)arg4 ;
-(void)copyBufferFrom:(char *)arg0 fromStride:(NSInteger)arg1 toPtr:(*float)arg2 toStride:(NSInteger)arg3 toWidth:(int)arg4 toHeight:(int)arg5 ;


@end


#endif