// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADDIAGNOSTICOPERATIONGROUP_H
#define CADDIAGNOSTICOPERATIONGROUP_H

@class NSString;
@protocol CADDiagnosticInterface;


#import "CADOperationGroup.h"

@interface CADDiagnosticOperationGroup : CADOperationGroup <CADDiagnosticInterface>

 {
    BOOL _entitled;
    BOOL _entitlementChecked;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)accessGranted;
-(void)CADDiagnosticsCancelCollectionWithToken:(unsigned int)arg0 reply:(id)arg1 ;
-(void)CADDiagnosticsCollectWithToken:(unsigned int)arg0 options:(NSInteger)arg1 reply:(id)arg2 ;


@end


#endif