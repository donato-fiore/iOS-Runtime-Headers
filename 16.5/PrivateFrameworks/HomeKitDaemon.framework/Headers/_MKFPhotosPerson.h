// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKFPHOTOSPERSON_H
#define _MKFPHOTOSPERSON_H

@class MKFPerson, NSString, NSUUID, NSDate;
@protocol MKFPhotosPerson, MKFPhotosPersonPrivateExtensions, MKFHome, MKFHomePerson, MKFUser;


#import "MKFPhotosPersonDatabaseID.h"
#import "_MKFHomePerson.h"
#import "_MKFUser.h"

@interface _MKFPhotosPerson : MKFPerson <MKFPhotosPerson, MKFPhotosPersonPrivateExtensions>



@property (readonly, copy, nonatomic) MKFPhotosPersonDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<MKFHome> *home;
@property (retain, nonatomic) _MKFHomePerson *linkedHomePerson;
@property (retain, nonatomic) NSObject<MKFHomePerson> *linkedHomePerson;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSUUID *photoLibraryPersonUUID;
@property (copy, nonatomic) NSUUID *photoLibraryPersonUUID;
@property (readonly) Class superclass;
@property (retain, nonatomic) _MKFUser *user;
@property (readonly, retain, nonatomic) NSObject<MKFUser> *user;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)fetchRequest;
-(id)castIfPhotosPerson;
-(id)createHMPerson;
-(void)updateWithHMPerson:(id)arg0 ;


@end


#endif