// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LTUIVISUALTRANSLATIONSERVICE_H
#define LTUIVISUALTRANSLATIONSERVICE_H


#import <Foundation/Foundation.h>


@interface LTUIVisualTranslationService : NSObject



+(id)compactObservations:(id)arg0 ;
+(void)isTranslatable:(id)arg0 completion:(id)arg1 ;
-(void)translate:(id)arg0 completion:(id)arg1 ;
-(void)translate:(id)arg0 sourceLocale:(id)arg1 targetLocale:(id)arg2 completion:(id)arg3 ;
-(void)translate:(id)arg0 targetLocale:(id)arg1 completion:(id)arg2 ;


@end


#endif