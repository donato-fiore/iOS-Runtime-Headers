// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFMESSAGEURLPROTOCOLREGISTRY_H
#define _MFMESSAGEURLPROTOCOLREGISTRY_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface _MFMessageURLProtocolRegistry : NSObject {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSMapTable *storage; // ivar: _storage


+(id)sharedRegistry;
-(id)contentRepresentationForURL:(id)arg0 ;
-(id)init;
-(void)registerContentRepresentation:(id)arg0 ;


@end


#endif