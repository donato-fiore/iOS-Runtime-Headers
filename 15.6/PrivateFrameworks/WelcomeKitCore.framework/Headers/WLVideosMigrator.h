// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLVIDEOSMIGRATOR_H
#define WLVIDEOSMIGRATOR_H

@class NSString, WLFeaturePayload;
@protocol WLDataclassMigrating, WLAnalyticsDataSource;

#import <Foundation/Foundation.h>

#import "WLPhotoLibrary.h"

@interface WLVideosMigrator : NSObject <WLDataclassMigrating, WLAnalyticsDataSource>

 {
    NSUInteger _importErrorCount;
    WLPhotoLibrary *_photoLibrary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) WLFeaturePayload *featurePayload; // ivar: _featurePayload
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)contentType;
-(BOOL)accountBased;
-(BOOL)storeRecordDataInDatabase;
-(BOOL)wantsSegmentedDownloads;
-(NSUInteger)importErrorCount;
-(id)contentType;
-(id)dataType;
-(id)importDidEnd;
-(id)importWillBegin;
-(void)addWorkingTime:(NSUInteger)arg0 ;
-(void)enable;
-(void)importRecordData:(id)arg0 summary:(id)arg1 account:(id)arg2 completion:(id)arg3 ;
-(void)setEstimatedDataSize:(NSUInteger)arg0 ;
-(void)setState:(id)arg0 ;


@end


#endif