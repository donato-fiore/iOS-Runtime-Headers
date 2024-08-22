// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTPAFEVENTHANDLERS_H
#define MTPAFEVENTHANDLERS_H



#import "MTEventHandlers.h"
#import "MTMediaActivityEventHandler.h"

@interface MTPAFEventHandlers : MTEventHandlers

@property (readonly, nonatomic) MTMediaActivityEventHandler *playStart;
@property (readonly, nonatomic) MTMediaActivityEventHandler *playStop;
@property (readonly, nonatomic) MTMediaActivityEventHandler *seekStart;
@property (readonly, nonatomic) MTMediaActivityEventHandler *seekStop;


-(Class)baseDataProviderClass;
-(void)registerDefaultEventHandlers;


@end


#endif