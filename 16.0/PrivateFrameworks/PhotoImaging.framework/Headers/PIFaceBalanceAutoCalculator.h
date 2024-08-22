// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIFACEBALANCEAUTOCALCULATOR_H
#define PIFACEBALANCEAUTOCALCULATOR_H

@class NUAutoCalculator, NSString;
@protocol NUTimeBased;



@interface PIFaceBalanceAutoCalculator : NUAutoCalculator <NUTimeBased>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSInteger rawState; // ivar: _rawState
@property (readonly) Class superclass;
@property (nonatomic) ? time;


+(id)faceBalanceResultFromFaceObservations:(id)arg0 request:(id)arg1 error:(*id)arg2 ;
+(struct ? )faceBalanceFromFaceImage:(id)arg0 forFaceRect:(struct ? )arg1 ;
+(struct ? )faceRectFromNormalizedFaceRet:(struct CGRect )arg0 forImageExtent:(struct ? )arg1 scaleX:(CGFloat)arg2 scaleY:(CGFloat)arg3 ;
+(void)calculateRAWWithRequest:(id)arg0 completion:(id)arg1 ;
+(void)calculateWithRequest:(id)arg0 completion:(id)arg1 ;
-(id)initWithRequest:(id)arg0 isRAW:(BOOL)arg1 ;
-(void)submit:(id)arg0 ;


@end


#endif