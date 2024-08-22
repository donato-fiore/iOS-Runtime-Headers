// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSCONTACTPROVIDER_H
#define DNDSCONTACTPROVIDER_H

@class CNContactStore, NSString;
@protocol DNDSContactProviding;

#import <Foundation/Foundation.h>


@interface DNDSContactProvider : NSObject <DNDSContactProviding>

 {
    CNContactStore *_contactStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedContactStore;
-(id)_bestMatchForContact:(id)arg0 inContacts:(id)arg1 ;
-(id)contactForContact:(id)arg0 ;
-(id)init;


@end


#endif