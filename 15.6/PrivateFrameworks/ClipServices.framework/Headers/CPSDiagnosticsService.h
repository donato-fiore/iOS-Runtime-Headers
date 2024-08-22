// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSDIAGNOSTICSSERVICE_H
#define CPSDIAGNOSTICSSERVICE_H


#import <Foundation/Foundation.h>


@interface CPSDiagnosticsService : NSObject



+(void)fetchABRMetadataWithURL:(id)arg0 completion:(id)arg1 ;
+(void)fetchAMPMetadataWithBundleID:(id)arg0 completion:(id)arg1 ;


@end


#endif