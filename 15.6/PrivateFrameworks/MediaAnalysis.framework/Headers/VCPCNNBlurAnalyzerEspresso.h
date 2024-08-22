// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPCNNBLURANALYZERESPRESSO_H
#define VCPCNNBLURANALYZERESPRESSO_H

@class NSString;


#import "VCPCNNBlurAnalyzer.h"
#import "VCPLoaned.h"

@interface VCPCNNBlurAnalyzerEspresso : VCPCNNBlurAnalyzer {
    VCPLoaned *_modelEspresso;
    *float _inputData;
    NSString *_resConfig;
    int _srcWidth;
    int _srcHeight;
}




+(id)sharedModel:(id)arg0 ;
+(id)sharedModelPoolWithRevision:(NSUInteger)arg0 ;
-(*float)getInputBuffer:(int)arg0 srcWidth:(int)arg1 cnnInputHeight:(*int)arg2 cnnInputWidth:(*int)arg3 ;
-(float)calculateScoreFromNetworkOutputV2:(*float)arg0 ;
-(id)init;
-(id)initWithRevision:(NSUInteger)arg0 ;
-(int)computeSharpnessScore:(*float)arg0 textureness:(char *)arg1 contrast:(float)arg2 imgWidth:(int)arg3 cancel:(id)arg4 ;
-(int)prepareModelForSourceWidth:(int)arg0 andSourceHeight:(int)arg1 ;
-(void)copyBufferFrom:(char *)arg0 fromStride:(NSInteger)arg1 toPtr:(*float)arg2 toStride:(NSInteger)arg3 toWidth:(int)arg4 toHeight:(int)arg5 ;
-(void)dealloc;


@end


#endif