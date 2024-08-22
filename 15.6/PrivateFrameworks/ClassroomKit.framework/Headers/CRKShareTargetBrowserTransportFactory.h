// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKSHARETARGETBROWSERTRANSPORTFACTORY_H
#define CRKSHARETARGETBROWSERTRANSPORTFACTORY_H


#import <Foundation/Foundation.h>


@interface CRKShareTargetBrowserTransportFactory : NSObject



-(id)makeInstructordTransportProvider;
-(id)makeStudentdTransportProvider;
-(void)makeInstructordTransportWithCompletion:(id)arg0 ;
-(void)makeStudentdTransportWithCompletion:(id)arg0 ;


@end


#endif