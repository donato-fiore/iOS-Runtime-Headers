// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCONTACTMANAGER_H
#define HUCONTACTMANAGER_H

@class NSDictionary, CNContactStore, CNMonogrammer;

#import <Foundation/Foundation.h>


@interface HUContactManager : NSObject

@property (copy, nonatomic) NSDictionary *cachedContactByEmails; // ivar: _cachedContactByEmails
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (nonatomic) CGFloat monogramDiameter; // ivar: _monogramDiameter
@property (retain, nonatomic) CNMonogrammer *monogrammer; // ivar: _monogrammer


+(id)sharedManager;
-(id)contactForEmailAddress:(id)arg0 keysToFetch:(id)arg1 ;
-(id)init;
-(id)userDataFromEmail:(id)arg0 monogramDiameter:(CGFloat)arg1 ;
-(void)contactStoreDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif