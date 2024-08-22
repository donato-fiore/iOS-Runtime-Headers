// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRUITESTDIAGNOSTIC_H
#define BRUITESTDIAGNOSTIC_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface BRUITestDiagnostic : NSObject {
    NSString *_outputDirectoryPath;
    NSMutableDictionary *_diagnosticDataBySectionName;
}




-(BOOL)writeToDiskWithError:(*id)arg0 ;
-(id)initWithOutputDirectoryPath:(id)arg0 ;
-(void)addDiagnosticData:(id)arg0 forFilename:(id)arg1 ;
-(void)addDiagnosticData:(id)arg0 forFilename:(id)arg1 sectionName:(id)arg2 ;


@end


#endif