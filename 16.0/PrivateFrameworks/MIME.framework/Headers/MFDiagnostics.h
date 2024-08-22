// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFDIAGNOSTICS_H
#define MFDIAGNOSTICS_H

@class NSLock, NSString;
@protocol MFDiagnosticsGenerator;

#import <Foundation/Foundation.h>

#import "MFWeakSet.h"

@interface MFDiagnostics : NSObject <MFDiagnosticsGenerator>

 {
    MFWeakSet *_diagnosticsGenerators;
    NSLock *_diagnosticLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedController;
-(id)copyDiagnosticInformation;
-(id)init;
-(void)addDiagnosticsGenerator:(id)arg0 ;
-(void)removeDiagnosticsGenerator:(id)arg0 ;


@end


#endif