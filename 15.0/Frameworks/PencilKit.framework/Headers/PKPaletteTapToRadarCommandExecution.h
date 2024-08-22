// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPALETTETAPTORADARCOMMANDEXECUTION_H
#define PKPALETTETAPTORADARCOMMANDEXECUTION_H

@protocol UIEditingOverlayInteractionWithView;

#import <Foundation/Foundation.h>

#import "PKPaletteTapToRadarConfiguration.h"

@interface PKPaletteTapToRadarCommandExecution : NSObject <UIEditingOverlayInteractionWithView>



@property (readonly, nonatomic) PKPaletteTapToRadarConfiguration *configuration; // ivar: _configuration


+(id)commandExecutionWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect )arg0 ;
-(void)run;


@end


#endif