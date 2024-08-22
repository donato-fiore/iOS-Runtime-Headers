// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNSHARINGPROFILEMECARDUPDATER_H
#define CNSHARINGPROFILEMECARDUPDATER_H

@class CNContactStore, CNContact, CNMutableContact;
@protocol CNSharingProfileMeCardUpdaterDelegate;

#import <Foundation/Foundation.h>

#import "CNSharingProfileLogger.h"

@interface CNSharingProfileMeCardUpdater : NSObject

@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (weak, nonatomic) NSObject<CNSharingProfileMeCardUpdaterDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) CNContact *imageContact; // ivar: _imageContact
@property (retain, nonatomic) CNSharingProfileLogger *logger; // ivar: _logger
@property (readonly, nonatomic) CNMutableContact *meContact; // ivar: _meContact


-(id)alertControllerForMeCardUpdateWithImageContact:(id)arg0 ;
-(id)initWithMeContact:(id)arg0 contactStore:(id)arg1 ;
-(void)performSave;


@end


#endif