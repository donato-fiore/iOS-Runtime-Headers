// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGSMARTCAMDIAGNOSTICS_H
#define FIGSMARTCAMDIAGNOSTICS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface FigSmartcamDiagnostics : NSObject {
    NSMutableDictionary *_metadata;
}




-(BOOL)addClassifierVersionMajor:(unsigned short)arg0 minor:(unsigned short)arg1 patch:(unsigned short)arg2 ;
-(BOOL)addMotionStats:(struct ? )arg0 ;
-(id)init;
-(id)metadata;
-(void)addPAMDecisionPreliminary:(id)arg0 ;
-(void)addSceneConfidences:(id)arg0 ;


@end


#endif