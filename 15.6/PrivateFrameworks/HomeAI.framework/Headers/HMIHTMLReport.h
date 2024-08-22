// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIHTMLREPORT_H
#define HMIHTMLREPORT_H

@class HMFObject, NSString, NSOutputStream;



@interface HMIHTMLReport : HMFObject

@property (readonly) NSString *outputPath; // ivar: _outputPath
@property (readonly) NSOutputStream *stream; // ivar: _stream


+(id)boxForRegionOfInterest:(struct CGRect )arg0 ;
+(id)boxesForEvent:(id)arg0 isTruth:(BOOL)arg1 ;
-(id)_loadResource:(id)arg0 withExtension:(id)arg1 ;
-(id)initWithTitle:(id)arg0 outputPath:(id)arg1 ;
-(void)appendFaceCrop:(id)arg0 imageBorder:(int)arg1 imageColor:(id)arg2 outlineBorder:(int)arg3 outlineColor:(id)arg4 ;
-(void)appendFragmentResult:(id)arg0 ;
-(void)appendFragmentResult:(id)arg0 assetPath:(id)arg1 ;
-(void)appendFrame:(id)arg0 text:(id)arg1 ;
-(void)appendFrame:(id)arg0 text:(id)arg1 boxes:(id)arg2 imageBorder:(int)arg3 imageColor:(id)arg4 outlineBorder:(int)arg5 outlineColor:(id)arg6 ;
-(void)appendFrameResult:(id)arg0 frameTruth:(id)arg1 description:(id)arg2 ;
-(void)appendHeaderWithTitle:(id)arg0 textColor:(id)arg1 backgroundColor:(id)arg2 ;
-(void)appendString:(id)arg0 ;
-(void)appendText:(id)arg0 ;
-(void)dealloc;
-(void)flush;


@end


#endif