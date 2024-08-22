// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBINSECUREDRAWINGALERTITEM_H
#define SBINSECUREDRAWINGALERTITEM_H

@class NSSet, NSString;


#import "SBDiagnosticRequestAlertItem.h"

@interface SBInsecureDrawingAlertItem : SBDiagnosticRequestAlertItem

@property (copy, nonatomic) NSSet *layerNames; // ivar: _layerNames
@property (copy, nonatomic) NSString *processName; // ivar: _processName


-(BOOL)ignoreIfAlreadyDisplaying;
-(BOOL)shouldShowInLockScreen;
-(NSInteger)radarClassification;
-(NSInteger)radarReproducibility;
-(id)_buildVersion;
-(id)message;
-(id)radarDescription;
-(id)radarTitle;
-(id)title;


@end


#endif