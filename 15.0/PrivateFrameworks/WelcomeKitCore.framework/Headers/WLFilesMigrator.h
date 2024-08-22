// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLFILESMIGRATOR_H
#define WLFILESMIGRATOR_H

@class NSString, WLFeaturePayload;
@protocol WLDataclassMigrating, WLAnalyticsDataSource;

#import <Foundation/Foundation.h>


@interface WLFilesMigrator : NSObject <WLDataclassMigrating, WLAnalyticsDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) WLFeaturePayload *featurePayload; // ivar: _featurePayload
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *rootPath; // ivar: _rootPath
@property (readonly) Class superclass;


+(id)contentType;
-(BOOL)accountBased;
-(BOOL)storeRecordDataInDatabase;
-(BOOL)wantsSegmentedDownloads;
-(id)contentType;
-(id)dataType;
-(id)importWillBegin;
-(id)init;
-(void)addWorkingTime:(NSUInteger)arg0 ;
-(void)enable;
-(void)importRecordData:(id)arg0 summary:(id)arg1 account:(id)arg2 completion:(id)arg3 ;
-(void)setEstimatedDataSize:(NSUInteger)arg0 ;
-(void)setState:(id)arg0 ;


@end


#endif