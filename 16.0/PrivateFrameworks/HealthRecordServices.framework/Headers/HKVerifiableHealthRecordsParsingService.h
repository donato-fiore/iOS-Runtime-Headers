// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKVERIFIABLEHEALTHRECORDSPARSINGSERVICE_H
#define HKVERIFIABLEHEALTHRECORDSPARSINGSERVICE_H

@class NSString, HKProxyProvider;
@protocol _HKXPCExportable;

#import <Foundation/Foundation.h>


@interface HKVerifiableHealthRecordsParsingService : NSObject <_HKXPCExportable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (readonly) Class superclass;


-(id)exportedInterface;
-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(id)remoteInterface;
// -(void)_fetchProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)connectionInvalidated;
-(void)parseDataSource:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;


@end


#endif