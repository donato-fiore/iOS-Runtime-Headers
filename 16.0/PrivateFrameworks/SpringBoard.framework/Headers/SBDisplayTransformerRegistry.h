// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDISPLAYTRANSFORMERREGISTRY_H
#define SBDISPLAYTRANSFORMERREGISTRY_H

@class NSMutableSet;
@protocol FBSDisplayTransformer, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBDisplayTransformerRegistry : NSObject <FBSDisplayTransformer>

 {
    os_unfair_lock_s _lock;
    NSMutableSet *_lock_transformers;
    id<BSInvalidatable> *_stateCaptureToken;
}




+(id)sharedInstance;
-(id)_lock_description;
-(id)addTransformer:(id)arg0 withIdentifier:(id)arg1 ;
-(id)debugDescription;
-(id)init;
-(id)transformDisplayConfiguration:(id)arg0 ;
-(void)dealloc;


@end


#endif