// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSPROCESSBEFORETRANSLOCATIONBUNDLEPATHPREDICATE_H
#define RBSPROCESSBEFORETRANSLOCATIONBUNDLEPATHPREDICATE_H

@class NSString;


#import "RBSProcessStringPredicate.h"

@interface RBSProcessBeforeTranslocationBundlePathPredicate : RBSProcessStringPredicate {
    NSString *_beforeTranslocationBundlePath;
    os_unfair_lock_s _lock;
}




-(BOOL)matchesProcess:(id)arg0 ;
-(id)beforeTranslocationBundlePath;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif