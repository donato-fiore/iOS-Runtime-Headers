// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCLOUDSTREAMSHAREJOB_H
#define PLCLOUDSTREAMSHAREJOB_H

@class NSString, NSArray;


#import "PLCloudSharingJob.h"

@interface PLCloudStreamShareJob : PLCloudSharingJob

@property (retain, nonatomic) NSString *albumCloudGUID; // ivar: _albumCloudGUID
@property (retain, nonatomic) NSString *albumName; // ivar: _albumName
@property (retain, nonatomic) NSString *commentText; // ivar: _commentText
@property (retain, nonatomic) NSArray *mediaSources; // ivar: _mediaSources
@property (retain, nonatomic) NSArray *recipientsInfo; // ivar: _recipientsInfo


+(void)publishMediaFromSources:(id)arg0 toNewSharedAlbumWithName:(id)arg1 withCommentText:(id)arg2 recipients:(id)arg3 ;
+(void)publishMediaFromSources:(id)arg0 toSharedAlbum:(id)arg1 withCommentText:(id)arg2 ;
-(BOOL)shouldArchiveXPCToDisk;
-(NSInteger)daemonOperation;
-(id)description;
-(id)initFromXPCObject:(id)arg0 libraryServicesManager:(id)arg1 ;
-(void)addInfosForRecipients:(id)arg0 ;
-(void)encodeToXPCObject:(id)arg0 ;
-(void)executeDaemonOperation;
-(void)run;
-(void)runDaemonSide;


@end


#endif