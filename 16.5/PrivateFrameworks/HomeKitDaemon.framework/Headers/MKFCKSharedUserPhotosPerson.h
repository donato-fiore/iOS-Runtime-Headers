// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFCKSHAREDUSERPHOTOSPERSON_H
#define MKFCKSHAREDUSERPHOTOSPERSON_H

@class NSString, NSUUID;
@protocol MKFPersonHMPersonTransformable;


#import "MKFCKSharedUserData.h"
#import "MKFCKSharedUserDataRoot.h"

@interface MKFCKSharedUserPhotosPerson : MKFCKSharedUserData <MKFPersonHMPersonTransformable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSUUID *photoLibraryPersonUUID;
@property (retain, nonatomic) MKFCKSharedUserDataRoot *root;
@property (readonly) Class superclass;


+(id)fetchRequest;
-(id)createHMPerson;
-(void)updateWithHMPerson:(id)arg0 ;


@end


#endif