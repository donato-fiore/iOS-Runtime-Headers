// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFCKPHOTOSPERSON_H
#define MKFCKPHOTOSPERSON_H

@class NSUUID;


#import "MKFCKPerson.h"
#import "MKFCKHomePerson.h"
#import "MKFCKUser.h"

@interface MKFCKPhotosPerson : MKFCKPerson

@property (retain, nonatomic) MKFCKHomePerson *linkedHomePerson;
@property (copy, nonatomic) NSUUID *photoLibraryPersonUUID;
@property (retain, nonatomic) MKFCKUser *user;


+(id)fetchRequest;
+(id)rootKeyPath;
-(BOOL)exportFromLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)importIntoLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)validateUser:(*id)arg0 error:(*id)arg1 ;
-(id)home;
-(void)setHome:(id)arg0 ;


@end


#endif