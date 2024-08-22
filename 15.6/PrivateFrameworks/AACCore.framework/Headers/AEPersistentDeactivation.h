// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AEPERSISTENTDEACTIVATION_H
#define AEPERSISTENTDEACTIVATION_H

@class NSString;
@protocol AEPolicyDeactivation;

#import <Foundation/Foundation.h>


@interface AEPersistentDeactivation : NSObject {
    NSString *_scratchpadIdentifier;
    id<AEPolicyDeactivation> *_deactivation;
}






@end


#endif