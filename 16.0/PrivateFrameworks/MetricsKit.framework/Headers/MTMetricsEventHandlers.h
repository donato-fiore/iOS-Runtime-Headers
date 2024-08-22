// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTMETRICSEVENTHANDLERS_H
#define MTMETRICSEVENTHANDLERS_H



#import "MTEventHandlers.h"
#import "MTAccountEventHandler.h"
#import "MTClickEventHandler.h"
#import "MTDialogEventHandler.h"
#import "MTEnterEventHandler.h"
#import "MTExitEventHandler.h"
#import "MTFlexibleEventHandler.h"
#import "MTImpressionsEventHandler.h"
#import "MTMediaEventHandler.h"
#import "MTPageEventHandler.h"
#import "MTSearchEventHandler.h"

@interface MTMetricsEventHandlers : MTEventHandlers

@property (readonly, nonatomic) MTAccountEventHandler *account;
@property (readonly, nonatomic) MTClickEventHandler *click;
@property (readonly, nonatomic) MTDialogEventHandler *dialog;
@property (readonly, nonatomic) MTEnterEventHandler *enter;
@property (readonly, nonatomic) MTExitEventHandler *exit;
@property (readonly, nonatomic) MTFlexibleEventHandler *flexible; // ivar: _flexible
@property (readonly, nonatomic) MTImpressionsEventHandler *impressions;
@property (readonly, nonatomic) MTMediaEventHandler *media;
@property (readonly, nonatomic) MTPageEventHandler *page;
@property (readonly, nonatomic) MTSearchEventHandler *search;


-(Class)baseDataProviderClass;
-(void)registerDefaultEventHandlers;


@end


#endif