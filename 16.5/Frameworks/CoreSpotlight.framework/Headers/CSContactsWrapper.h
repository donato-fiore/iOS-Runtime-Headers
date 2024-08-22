// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSCONTACTSWRAPPER_H
#define CSCONTACTSWRAPPER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CSContactsWrapper : NSObject

@property (readonly, nonatomic) NSString *CNContactEmailAddressesKeyString;
@property (readonly, nonatomic) Class CNContactPropertyClass;


+(Class)CNContactClass;
+(Class)CNContactFetchRequestClass;
+(Class)CNContactFormatterClass;
+(Class)CNContactStoreClass;
+(id)CNContactNicknameKey;
+(id)sharedInstance;


@end


#endif