// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTPERFEVENTHANDLERS_H
#define MTPERFEVENTHANDLERS_H



#import "MTEventHandlers.h"
#import "MTFlexiblePerfEventHandler.h"
#import "MTLoadUrlEventHandler.h"
#import "MTPageRenderEventHandler.h"

@interface MTPerfEventHandlers : MTEventHandlers

@property (readonly, nonatomic) MTFlexiblePerfEventHandler *flexible; // ivar: _flexible
@property (readonly, nonatomic) MTLoadUrlEventHandler *loadUrl;
@property (readonly, nonatomic) MTPageRenderEventHandler *pageRender;


-(Class)baseDataProviderClass;
-(void)registerDefaultEventHandlers;


@end


#endif