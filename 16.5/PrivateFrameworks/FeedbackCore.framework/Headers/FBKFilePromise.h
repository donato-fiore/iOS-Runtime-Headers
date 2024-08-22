// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKFILEPROMISE_H
#define FBKFILEPROMISE_H

@class NSString, NSDate, NSNumber;
@protocol FBKDownloadableFilePromise;


#import "FBKManagedFeedbackObject.h"
#import "FBKFeedbackFollowup.h"
#import "FBKFormResponse.h"

@interface FBKFilePromise : FBKManagedFeedbackObject <FBKDownloadableFilePromise>



@property (readonly, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) NSNumber *deviceID;
@property (retain) FBKFeedbackFollowup *feedbackFollowup;
@property (retain) FBKFormResponse *formResponse;
@property (readonly, nonatomic) NSString *localizedDownloadErrorString;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) NSInteger size;
@property (nonatomic) NSInteger state; // ivar: state
@property (retain, nonatomic) NSNumber *statusEnum;
@property (retain, nonatomic) NSDate *updatedAt;
@property (retain, nonatomic) NSString *uuid;


+(NSUInteger)downloadStateWithUUID:(id)arg0 state:(NSInteger)arg1 creationDate:(id)arg2 contentItem:(id)arg3 ;
+(id)entityName;
+(id)localizedDownloadErrorStringForState:(NSUInteger)arg0 ;
-(BOOL)canDownload;
-(NSUInteger)downloadState;
-(void)setPropertiesFromJSONObject:(id)arg0 ;


@end


#endif