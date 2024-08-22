// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXBASICGADGETDATASOURCEMANAGER_H
#define PXBASICGADGETDATASOURCEMANAGER_H

@class NSArray;


#import "PXGadgetDataSourceManager.h"

@interface PXBasicGadgetDataSourceManager : PXGadgetDataSourceManager

@property (copy, nonatomic) NSArray *providers; // ivar: _providers


-(id)gadgetProviders;
-(id)initWithProviders:(id)arg0 ;


@end


#endif