// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSICKIT_SOFTLINKING_MPSTORELIBRARYPERSONALIZATIONREQUEST_H
#define MUSICKIT_SOFTLINKING_MPSTORELIBRARYPERSONALIZATIONREQUEST_H

@class MPStoreLibraryPersonalizationRequest;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPStoreLibraryPersonalizationRequest : NSObject {
    MPStoreLibraryPersonalizationRequest *_underlyingPersonalizationRequest;
}




-(id)initWithUnpersonalizedRequest:(id)arg0 unpersonalizedContentDescriptors:(id)arg1 representedObjects:(id)arg2 ;
-(void)performWithCompletionHandler:(id)arg0 ;


@end


#endif