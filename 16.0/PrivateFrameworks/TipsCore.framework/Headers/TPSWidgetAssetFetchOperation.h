// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSWIDGETASSETFETCHOPERATION_H
#define TPSWIDGETASSETFETCHOPERATION_H

@class NSURL;


#import "TPSAsyncOperation.h"
#import "TPSWidgetController.h"
#import "TPSDocument.h"

@interface TPSWidgetAssetFetchOperation : TPSAsyncOperation

@property (retain, nonatomic) NSURL *darkAssetURL; // ivar: _darkAssetURL
@property (retain, nonatomic) NSURL *lightAssetURL; // ivar: _lightAssetURL
@property (readonly, weak, nonatomic) TPSWidgetController *widgetController; // ivar: _widgetController
@property (readonly, nonatomic) TPSDocument *widgetDocument; // ivar: _widgetDocument


-(id)initWithDocument:(id)arg0 widgetController:(id)arg1 ;
-(void)main;


@end


#endif