// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKFILEPROMISESTUB_H
#define FBKFILEPROMISESTUB_H

@class NSString, NSDate, NSNumber;
@protocol FBKDownloadableFilePromise;


#import "FBKManagedFeedbackObject.h"
#import "FBKFormResponseStub.h"

@interface FBKFilePromiseStub : FBKManagedFeedbackObject <FBKDownloadableFilePromise>



@property (readonly, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) FBKFormResponseStub *formResponseStub;
@property (readonly, nonatomic) NSString *localizedDownloadErrorString;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *remoteID;
@property (readonly, nonatomic) NSInteger status;
@property (nonatomic) NSInteger statusEnum;
@property (copy, nonatomic) NSString *uuid;


+(id)entityName;
+(id)fetchRequest;
-(BOOL)canDownload;
-(NSUInteger)downloadState;
-(void)setPropertiesFromJSONObject:(id)arg0 ;


@end


#endif