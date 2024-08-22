// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXLAYOUTPARAMETERSMANAGER_H
#define SXLAYOUTPARAMETERSMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SXLayoutParametersManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *durations; // ivar: _durations


-(id)init;
-(id)layoutParametersForTask:(id)arg0 previousLayoutOptions:(id)arg1 ;
-(void)layoutFinishedForTask:(id)arg0 result:(id)arg1 ;


@end


#endif