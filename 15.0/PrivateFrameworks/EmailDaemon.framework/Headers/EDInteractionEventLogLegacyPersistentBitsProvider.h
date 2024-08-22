// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDINTERACTIONEVENTLOGLEGACYPERSISTENTBITSPROVIDER_H
#define EDINTERACTIONEVENTLOGLEGACYPERSISTENTBITSPROVIDER_H

@class NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface EDInteractionEventLogLegacyPersistentBitsProvider : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
-(id)_findExistingSaltError:(*id)arg0 ;
-(id)_oldSalt;
-(id)_persistentBits;
-(id)_queryKeychainError:(*id)arg0 ;


@end


#endif