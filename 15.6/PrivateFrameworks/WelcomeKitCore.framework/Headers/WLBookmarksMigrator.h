// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLBOOKMARKSMIGRATOR_H
#define WLBOOKMARKSMIGRATOR_H

@class WebBookmarkCollection, NSString, WLFeaturePayload;
@protocol WLDataclassMigrating, WLAnalyticsDataSource;

#import <Foundation/Foundation.h>


@interface WLBookmarksMigrator : NSObject <WLDataclassMigrating, WLAnalyticsDataSource>

 {
    WebBookmarkCollection *_collection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) WLFeaturePayload *featurePayload; // ivar: _featurePayload
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_bookmarkFolderAtTitlePath:(id)arg0 withinBookmarkFolder:(id)arg1 ;
+(id)_bookmarkFolderAtTitlePath:(id)arg0 withinRootFolder:(id)arg1 ;
+(id)_createBookmarkFolderWithTitle:(id)arg0 UUID:(id)arg1 ;
+(id)_createRootBookmarkFolder;
+(id)contentType;
-(BOOL)accountBased;
-(BOOL)storeRecordDataInDatabase;
-(BOOL)wantsSegmentedDownloads;
-(id)contentType;
-(id)dataType;
-(id)importDidEnd;
-(id)importWillBegin;
-(void)addWorkingTime:(NSUInteger)arg0 ;
-(void)enable;
-(void)estimateItemSizeForSummary:(id)arg0 account:(id)arg1 ;
// -(void)importDataFromProvider:(id)arg0 forSummaries:(unk)arg1 summaryStart:(id)arg2 summaryCompletion:(id)arg3  ;
-(void)setEstimatedDataSize:(NSUInteger)arg0 ;
-(void)setState:(id)arg0 ;


@end


#endif