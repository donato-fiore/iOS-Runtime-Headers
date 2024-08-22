// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKDATABASECONTROL_H
#define HKDATABASECONTROL_H

@class NSString;
@protocol _HKXPCExportable, HKDatabaseControlClient;

#import <Foundation/Foundation.h>

#import "HKProxyProvider.h"

@interface HKDatabaseControl : NSObject <_HKXPCExportable, HKDatabaseControlClient>

 {
    HKProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)healthDatabaseIdentifierWithError:(*id)arg0 ;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)getHealthDirectorySizeInBytesWithCompletion:(id)arg0 ;
-(void)obliterateHealthDataWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)performMigrationWithCompletion:(id)arg0 ;


@end


#endif