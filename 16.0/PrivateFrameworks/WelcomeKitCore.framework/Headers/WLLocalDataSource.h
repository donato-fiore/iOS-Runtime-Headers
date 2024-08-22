// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLLOCALDATASOURCE_H
#define WLLOCALDATASOURCE_H

@class NSString;
@protocol WLMigrationDataSource;

#import <Foundation/Foundation.h>


@interface WLLocalDataSource : NSObject <WLMigrationDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)localDataExists;
+(id)_localSourceDataPath;
+(id)_relativePathForAccount:(id)arg0 migrator:(id)arg1 ;
+(id)_relativePathForSummary:(id)arg0 migrator:(id)arg1 ;
+(void)deleteLocalData;
+(void)stashData:(id)arg0 forSummary:(id)arg1 migrator:(id)arg2 ;
+(void)stashFileForSummary:(id)arg0 migrator:(id)arg1 ;
-(void)accountsDataForMigrator:(id)arg0 completion:(id)arg1 ;
-(void)dataForSummary:(id)arg0 migrator:(id)arg1 completion:(id)arg2 ;
-(void)dataSegmentForSummary:(id)arg0 byteRange:(struct _NSRange )arg1 migrator:(id)arg2 completion:(id)arg3 ;
// -(void)fileForSummary:(id)arg0 migrator:(id)arg1 fileAccessor:(id)arg2 completion:(unk)arg3  ;
-(void)itemSizeForSummary:(id)arg0 migrator:(id)arg1 completion:(id)arg2 ;
-(void)summariesDataForAccount:(id)arg0 migrator:(id)arg1 completion:(id)arg2 ;
-(void)updateUIWithProgress:(CGFloat)arg0 remainingTime:(CGFloat)arg1 logString:(id)arg2 completion:(id)arg3 ;


@end


#endif