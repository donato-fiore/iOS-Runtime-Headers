// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFCKHOMEPERSON_H
#define MKFCKHOMEPERSON_H

@class NSUUID;


#import "MKFCKPerson.h"
#import "MKFCKHome.h"
#import "MKFCKPhotosPerson.h"

@interface MKFCKHomePerson : MKFCKPerson

@property (retain, nonatomic) MKFCKHome *home;
@property (retain, nonatomic) MKFCKPhotosPerson *linkedPhotosPerson;
@property (copy, nonatomic) NSUUID *linkedSharedPhotosPersonModelID;


+(id)fetchRequest;
-(BOOL)exportFromLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)importIntoLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;


@end


#endif