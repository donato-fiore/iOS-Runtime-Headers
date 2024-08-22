// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAEKEYERAUTOKEYSETUPUTIL_H
#define PAEKEYERAUTOKEYSETUPUTIL_H


#import <Foundation/Foundation.h>

#import "PAEKeyerAutokeySetup.h"
#import "PAEKeyerHistogram.h"

@interface PAEKeyerAutokeySetupUtil : NSObject {
    id *_apiManager;
    PAEKeyerAutokeySetup *_autokeySetup;
    PAEKeyerHistogram *_keyerHistogram;
    id *_actionAPI;
    id *_getAPI;
    id *_setAPI;
}




-(*void)getHistogram;
-(id)getInitialSamples;
-(id)initWithAPIManager:(id)arg0 ;
-(int)getSamplesNb;
-(struct Vec3f )getInitialSample:(int)arg0 ;
-(void)addInitialSample:(struct Vec3f *)arg0 ;
-(void)clearInitialSamples;
-(void)dealloc;
-(void)delInitialSample:(int)arg0 ;
-(void)fillAutokeySamplesArray:(*void)arg0 ;
-(void)getDataFromDB;
-(void)setHistogram:(*void)arg0 ;
-(void)syncWithDB;
-(void)syncWithDBAsDefault;


@end


#endif