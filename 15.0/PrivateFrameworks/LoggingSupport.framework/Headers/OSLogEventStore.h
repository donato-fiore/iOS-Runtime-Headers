// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSLOGEVENTSTORE_H
#define OSLOGEVENTSTORE_H

@class NSURL, NSArray;

#import <Foundation/Foundation.h>


@interface OSLogEventStore : NSObject

@property (retain, nonatomic) NSURL *_archiveURL; // ivar: _archiveURL
@property (copy, nonatomic) id *_progressHandler; // ivar: _progressHandler
@property (retain, nonatomic) NSArray *_relativeFilePaths; // ivar: _relativeFilePaths
@property (copy, nonatomic) id *_upgradeHandler; // ivar: _upgradeHandler


+(id)localStore;
+(id)storeWithArchiveURL:(id)arg0 ;
+(id)storeWithArchiveURL:(id)arg0 relativePaths:(id)arg1 ;
+(id)storeWithFileURL:(id)arg0 ;
-(id)initWithArchiveURL:(id)arg0 ;
-(id)initWithArchiveURL:(id)arg0 relativePaths:(id)arg1 ;
-(void)prepareWithCompletionHandler:(id)arg0 ;
-(void)setProgressHandler:(id)arg0 ;
-(void)setUpgradeConfirmationHandler:(id)arg0 ;


@end


#endif