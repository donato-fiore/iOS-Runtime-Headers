// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKFHOMEPERSON_H
#define _MKFHOMEPERSON_H

@class MKFPerson, NSString, NSUUID, NSDate;
@protocol MKFHomePerson, MKFHomePersonPrivateExtensions, MKFHome, MKFPhotosPerson;


#import "MKFHomePersonDatabaseID.h"
#import "_MKFHome.h"
#import "_MKFPhotosPerson.h"

@interface _MKFHomePerson : MKFPerson <MKFHomePerson, MKFHomePersonPrivateExtensions>



@property (readonly, copy, nonatomic) MKFHomePersonDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _MKFHome *home;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (retain, nonatomic) _MKFPhotosPerson *linkedPhotosPerson;
@property (retain, nonatomic) NSObject<MKFPhotosPerson> *linkedPhotosPerson;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)fetchRequest;
-(id)castIfHomePerson;
-(id)createHMPerson;
-(id)photosPersonForPersonLink:(id)arg0 ;
-(void)updateWithHMPerson:(id)arg0 ;


@end


#endif