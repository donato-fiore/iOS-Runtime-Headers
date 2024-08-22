// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXDATASECTIONENABLEMENTFORWARDER_H
#define PXDATASECTIONENABLEMENTFORWARDER_H

@class NSString;
@protocol PXDataSectionManagerChangeObserver, PXDataSectionManagerEnabling;

#import <Foundation/Foundation.h>

#import "PXDataSectionManager.h"

@interface PXDataSectionEnablementForwarder : NSObject <PXDataSectionManagerChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PXDataSectionManagerEnabling> *enablementTarget; // ivar: _enablementTarget
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXDataSectionManager *sourceDataSectionManager; // ivar: _sourceDataSectionManager
@property (readonly) Class superclass;


-(id)initWithSourceDataSectionManager:(id)arg0 ;
-(void)_updateEnablement;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif