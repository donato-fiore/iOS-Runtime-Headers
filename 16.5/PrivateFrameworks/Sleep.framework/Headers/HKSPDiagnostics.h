// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPDIAGNOSTICS_H
#define HKSPDIAGNOSTICS_H

@class NSString;

#import <Foundation/Foundation.h>

#import "HKSPObserverSet.h"

@interface HKSPDiagnostics : NSObject

@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) HKSPObserverSet *providers; // ivar: _providers


-(id)initWithLabel:(id)arg0 ;
-(void)_registerStateHandler;
-(void)addProvider:(id)arg0 ;
-(void)removeProvider:(id)arg0 ;


@end


#endif