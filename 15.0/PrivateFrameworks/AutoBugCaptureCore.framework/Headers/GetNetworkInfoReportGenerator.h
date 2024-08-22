// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GETNETWORKINFOREPORTGENERATOR_H
#define GETNETWORKINFOREPORTGENERATOR_H



#import "NetworkDiagnosticsReportGenerator.h"

@interface GetNetworkInfoReportGenerator : NetworkDiagnosticsReportGenerator



-(id)initWithQueue:(id)arg0 ;
-(void)setDefaults;
-(void)setGNINDFInfoOption:(BOOL)arg0 ;
-(void)setGNISensitiveOption:(BOOL)arg0 ;
-(void)setGNISysConfigOption:(BOOL)arg0 ;


@end


#endif