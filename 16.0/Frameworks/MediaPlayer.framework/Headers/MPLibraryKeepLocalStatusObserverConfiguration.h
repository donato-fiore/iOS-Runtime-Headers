// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPLIBRARYKEEPLOCALSTATUSOBSERVERCONFIGURATION_H
#define MPLIBRARYKEEPLOCALSTATUSOBSERVERCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "MPModelObject.h"

@interface MPLibraryKeepLocalStatusObserverConfiguration : NSObject

@property (nonatomic) NSInteger enableState; // ivar: _enableState
@property (retain, nonatomic) MPModelObject *identifyingModelObject; // ivar: _identifyingModelObject


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif