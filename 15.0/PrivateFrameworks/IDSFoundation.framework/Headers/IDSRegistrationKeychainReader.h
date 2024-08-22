// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSREGISTRATIONKEYCHAINREADER_H
#define IDSREGISTRATIONKEYCHAINREADER_H

@class NSMutableArray, IMTimer;

#import <Foundation/Foundation.h>


@interface IDSRegistrationKeychainReader : NSObject {
    NSMutableArray *_registrationData;
    IMTimer *_purgeTimer;
    id *_purgeCancelBlock;
    id *_purgeEnqueueBlock;
}




+(id)keychainAccessGroupForVersion:(NSUInteger)arg0 ;
+(id)keychainAccountForVersion:(NSUInteger)arg0 ;
+(id)keychainServiceForVersion:(NSUInteger)arg0 ;
+(id)sharedInstance;
-(id)init;
-(id)registrationData;
-(id)registrationWithServiceType:(id)arg0 accountType:(int)arg1 isTemporary:(BOOL)arg2 value:(id)arg3 ;
-(void)_flush;
-(void)_reloadFromDictionaryLocked:(id)arg0 ;
-(void)_reloadFromKeychainLocked;
-(void)_setPurgeTimer;
-(void)dealloc;
-(void)flushCache;


@end


#endif