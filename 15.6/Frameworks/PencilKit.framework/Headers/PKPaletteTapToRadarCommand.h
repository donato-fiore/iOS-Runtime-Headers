// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPALETTETAPTORADARCOMMAND_H
#define PKPALETTETAPTORADARCOMMAND_H

@protocol UIEditingOverlayInteractionWithView, PKPaletteTapToRadarCommandDelegate;

#import <Foundation/Foundation.h>

#import "PKPaletteTapToRadarCommandExecution.h"

@interface PKPaletteTapToRadarCommand : NSObject <UIEditingOverlayInteractionWithView>

 {
    PKPaletteTapToRadarCommandExecution *_execution;
}


@property (readonly, weak, nonatomic) NSObject<PKPaletteTapToRadarCommandDelegate> *delegate; // ivar: _delegate


-(id)initWithDelegate:(id)arg0 ;
-(void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect )arg0 ;
-(void)execute;


@end


#endif