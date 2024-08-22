// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCANVASMASKPROVIDER_H
#define SUCANVASMASKPROVIDER_H



#import "SUMaskProvider.h"
#import "SUScriptCanvasFunction.h"

@interface SUCanvasMaskProvider : SUMaskProvider {
    SUScriptCanvasFunction *_function;
}




-(id)copyMaskImageWithSize:(struct CGSize )arg0 ;
-(id)initWithFunction:(id)arg0 ;
-(struct CGPath *)copyPathForMaskWithSize:(struct CGSize )arg0 ;
-(void)dealloc;


@end


#endif