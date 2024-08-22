// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGSTORAGECONTACT_H
#define SGSTORAGECONTACT_H

@class NSMutableSet, NSString, SGRecordId;

#import <Foundation/Foundation.h>

#import "SGContactDetailsHolder.h"

@interface SGStorageContact : NSObject {
    NSMutableSet *_profiles;
}


@property (retain) SGContactDetailsHolder *internalDetectedDetails; // ivar: _internalDetectedDetails
@property (readonly, nonatomic) NSInteger masterEntityId; // ivar: _masterEntityId
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) SGRecordId *recordId; // ivar: _recordId


+(id)contactFromContactEntity:(id)arg0 ;
+(id)contactWithMasterEntityId:(NSInteger)arg0 ;
+(id)mergeAll:(id)arg0 ;
-(BOOL)canMerge:(id)arg0 ;
-(BOOL)hasProfileFromInteraction;
-(BOOL)hasProfileFromTextMessage;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStorageContact:(id)arg0 ;
-(NSUInteger)hash;
-(id)allNames;
-(id)bestProfile;
-(id)convertToContact:(id)arg0 ;
-(id)convertToContact:(id)arg0 sourceEntity:(id)arg1 enrichments:(id)arg2 ;
-(id)description;
-(id)init;
-(id)loadAddressDetailsFrom:(id)arg0 ;
-(id)loadAllDetailsFrom:(id)arg0 ;
-(id)loadBirthdayDetailsFrom:(id)arg0 ;
-(id)loadEmailAddressDetailsFrom:(id)arg0 ;
-(id)loadPhoneDetailsFrom:(id)arg0 ;
-(id)profiles;
-(void)addProfile:(id)arg0 ;
-(void)merge:(id)arg0 ;
-(void)reload;


@end


#endif