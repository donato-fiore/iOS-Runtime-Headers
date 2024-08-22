// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FXSTREAM_H
#define FXSTREAM_H


#import <Foundation/Foundation.h>


@interface FxStream : NSObject {
    *FxStreamPriv _priv;
}




-(id)createSampleAtTime:(CGFloat)arg0 ;
-(id)init;
-(id)pin;
-(id)provider;
-(void)dealloc;
-(void)setPin:(id)arg0 ;


@end


#endif