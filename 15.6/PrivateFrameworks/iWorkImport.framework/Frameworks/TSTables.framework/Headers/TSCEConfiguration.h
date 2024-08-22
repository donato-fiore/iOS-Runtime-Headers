// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCECONFIGURATION_H
#define TSCECONFIGURATION_H


#import <Foundation/Foundation.h>


@interface TSCEConfiguration : NSObject {
    BOOL mWarnWhenFormulasReferToEmptyCells;
}




+(id)sharedCalculationEngineConfiguration;
-(BOOL)warnWhenFormulasReferToEmptyCells;
-(id)init;
-(void)setWarnWhenFormulasReferToEmptyCells:(BOOL)arg0 ;


@end


#endif