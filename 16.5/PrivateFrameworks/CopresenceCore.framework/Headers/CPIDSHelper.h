// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPIDSHELPER_H
#define CPIDSHELPER_H

@class IDSService, NSString;

#import <Foundation/Foundation.h>


@interface CPIDSHelper : NSObject {
    IDSService *_service;
}


@property (readonly, copy, nonatomic) NSString *selfAccountName;


+(BOOL)isMuseCapable;
+(id)convertToIDSDestintation:(id)arg0 ;
+(id)rawAddressForDestination:(id)arg0 ;
-(BOOL)isLoggedIn;
-(BOOL)isSelfAlias:(id)arg0 ;
-(id)anySelfAccount;
-(id)initWithSevice:(id)arg0 ;


@end


#endif