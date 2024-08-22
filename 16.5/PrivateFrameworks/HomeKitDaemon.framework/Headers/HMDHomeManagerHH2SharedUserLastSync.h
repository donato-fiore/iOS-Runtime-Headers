// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEMANAGERHH2SHAREDUSERLASTSYNC_H
#define HMDHOMEMANAGERHH2SHAREDUSERLASTSYNC_H

@class HMFObject, NSDate, NSString, NSData, NSUUID;


#import "HMDUser.h"

@interface HMDHomeManagerHH2SharedUserLastSync : HMFObject {
    NSDate *_creationDate;
    NSString *_archivePath;
}


@property (readonly) NSData *archive;
@property (readonly) NSDate *creationDate;
@property (retain) NSUUID *homeUUID; // ivar: _homeUUID
@property (retain) HMDUser *user; // ivar: _user
@property (readonly, getter=isValid) BOOL valid; // ivar: _valid


+(id)shortDescription;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)description;
-(id)initWithArchivePath:(id)arg0 ;
-(id)privateDescription;
-(id)shortDescription;
-(void)configure;
-(void)removeArchiveFromLocalDisk;


@end


#endif