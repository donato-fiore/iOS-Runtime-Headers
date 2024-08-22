// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFCONTACTSMANAGER_H
#define MFCONTACTSMANAGER_H

@class CNContactStore;

#import <Foundation/Foundation.h>


@interface MFContactsManager : NSObject

@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore


+(BOOL)isAuthorizedToUseContacts;
+(id)sharedManager;
-(id)init;
-(id)initWithContactStore:(id)arg0 ;


@end


#endif