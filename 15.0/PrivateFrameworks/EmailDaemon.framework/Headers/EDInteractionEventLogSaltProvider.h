// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDINTERACTIONEVENTLOGSALTPROVIDER_H
#define EDINTERACTIONEVENTLOGSALTPROVIDER_H

@class NSString, NSData;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface EDInteractionEventLogSaltProvider : NSObject <EFLoggable>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *salt; // ivar: _salt
@property (readonly) Class superclass;


+(id)log;
+(id)saltProviderWithString:(id)arg0 ;
-(BOOL)migrateAccessClass;
-(id)_createSalt;
-(id)_findExistingSaltError:(*id)arg0 ;
-(id)_findOrCreateSalt;
-(id)_queryKeychainError:(*id)arg0 ;
-(id)init;
-(void)_deleteSalt;


@end


#endif