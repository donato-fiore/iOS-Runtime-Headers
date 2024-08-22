// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSCONTACTSWRAPPER_H
#define CSCONTACTSWRAPPER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CSContactsWrapper : NSObject

@property (readonly, nonatomic) NSString *CNContactEmailAddressesKeyString;
@property (readonly, nonatomic) Class CNContactPropertyClass;


+(id)sharedInstance;


@end


#endif