// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORESOURCEMANIFESTUPDATEASSERTIONREGISTRY_H
#define GEORESOURCEMANIFESTUPDATEASSERTIONREGISTRY_H

@class geo_isolater, NSMutableArray, NSString;
@protocol GEOPListStateCapturing;

#import <Foundation/Foundation.h>


@interface GEOResourceManifestUpdateAssertionRegistry : NSObject <GEOPListStateCapturing>

 {
    geo_isolater *_isolation;
    NSMutableArray *_assertions;
    NSUInteger _stateCaptureHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedRegistry;
-(BOOL)hasActiveAssertions;
-(id)activeAssertionsDescription;
-(id)addAssertionForProcess:(id)arg0 reason:(id)arg1 creationTimestamp:(CGFloat)arg2 ;
-(id)addInternalAssertionForReason:(id)arg0 ;
-(id)captureStatePlistWithHints:(struct os_state_hints_s *)arg0 ;
-(id)init;
-(void)dealloc;
-(void)removeAssertion:(id)arg0 ;


@end


#endif