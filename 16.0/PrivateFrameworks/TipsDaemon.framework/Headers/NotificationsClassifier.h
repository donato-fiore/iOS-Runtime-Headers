// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NOTIFICATIONSCLASSIFIER_H
#define NOTIFICATIONSCLASSIFIER_H

@class MLModel;

#import <Foundation/Foundation.h>


@interface NotificationsClassifier : NSObject

@property (readonly, nonatomic) MLModel *model; // ivar: _model


+(id)URLOfModelInThisBundle;
+(void)loadContentsOfURL:(id)arg0 configuration:(id)arg1 completionHandler:(id)arg2 ;
+(void)loadWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithContentsOfURL:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithMLModel:(id)arg0 ;
-(id)predictionFromFeatures:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionFrom_0:(CGFloat)arg0 _1:(CGFloat)arg1 _2:(CGFloat)arg2 _3:(CGFloat)arg3 _4:(CGFloat)arg4 _5:(CGFloat)arg5 _6:(CGFloat)arg6 _7:(CGFloat)arg7 _8:(CGFloat)arg8 _9:(CGFloat)arg9 _10:(CGFloat)arg10 _11:(CGFloat)arg11 _12:(CGFloat)arg12 _13:(CGFloat)arg13 _14:(CGFloat)arg14 _15:(CGFloat)arg15 _16:(CGFloat)arg16 _17:(CGFloat)arg17 _18:(CGFloat)arg18 _19:(CGFloat)arg19 _20:(CGFloat)arg20 _21:(CGFloat)arg21 _22:(CGFloat)arg22 _23:(CGFloat)arg23 _24:(CGFloat)arg24 _25:(CGFloat)arg25 _26:(CGFloat)arg26 _27:(CGFloat)arg27 _28:(CGFloat)arg28 _29:(CGFloat)arg29 _30:(CGFloat)arg30 _31:(CGFloat)arg31 _32:(CGFloat)arg32 _33:(CGFloat)arg33 _34:(CGFloat)arg34 error:(*id)arg35 ;
-(id)predictionsFromInputs:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif