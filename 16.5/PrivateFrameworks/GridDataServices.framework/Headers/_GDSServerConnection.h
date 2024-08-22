// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GDSSERVERCONNECTION_H
#define _GDSSERVERCONNECTION_H

@class NSDate, NSString, NSUserDefaults;
@protocol NSURLSessionDelegate, OS_os_log;

#import <Foundation/Foundation.h>


@interface _GDSServerConnection : NSObject <NSURLSessionDelegate>



@property (retain, nonatomic) NSDate *configFetchDate; // ivar: _configFetchDate
@property (nonatomic) CGFloat configVersion; // ivar: _configVersion
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCASupported; // ivar: _isCASupported
@property (nonatomic) BOOL isCECSupported; // ivar: _isCECSupported
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) NSString *serverURL; // ivar: _serverURL
@property (readonly) Class superclass;


+(id)dateFormatter;
+(id)dateFromString:(id)arg0 ;
+(id)dateStringFromDate:(id)arg0 ;
+(id)fetchConfigWithError:(*id)arg0 ;
+(id)osBuildVersion;
+(id)platform;
+(id)queryItemsMetaParams;
+(id)sharedInstance;
-(id)dataFromLocation:(id)arg0 ;
-(id)fetchBalancingAuthorityFromLocation:(id)arg0 ;
-(id)fetchBalancingAuthorityPolygons;
-(id)fetchCarbonIntensityHistoryForBA:(id)arg0 from:(id)arg1 to:(id)arg2 ;
-(id)fetchMarginalEmissionForecastFor:(id)arg0 ;
-(id)getFakeSecret;
-(id)getFakeSecretVersion;
-(id)getRequestForEndpoint:(id)arg0 withData:(id)arg1 keySequence:(id)arg2 ;
-(id)init;
-(id)postRequestForEndpoint:(id)arg0 withData:(id)arg1 ;
-(void)checkServerConfiguration;
-(void)handleNewConfig:(id)arg0 ;
-(void)loadConfigState;


@end


#endif