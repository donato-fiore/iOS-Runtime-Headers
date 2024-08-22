// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYPARTICIPANTVALIDATIONMANAGER_H
#define PXSHAREDLIBRARYPARTICIPANTVALIDATIONMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXSharedLibraryParticipantValidationManager : NSObject {
    NSMutableDictionary *_queryAddressesToQueries;
    NSObject<OS_dispatch_queue> *_ivarQueue;
}




-(id)init;
-(void)requestValidationForPhoneNumbers:(id)arg0 emailAddresses:(id)arg1 resultHandler:(id)arg2 ;


@end


#endif