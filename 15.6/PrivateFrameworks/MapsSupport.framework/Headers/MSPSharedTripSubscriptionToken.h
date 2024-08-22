// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPSHAREDTRIPSUBSCRIPTIONTOKEN_H
#define MSPSHAREDTRIPSUBSCRIPTIONTOKEN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MSPSharedTripSubscriptionToken : NSObject {
    NSString *_sharedTripIdentifier;
    id *_invalidationHandler;
}




-(id)initWithSharedTripIdentifier:(id)arg0 invalidationHandler:(id)arg1 ;
-(void)dealloc;


@end


#endif