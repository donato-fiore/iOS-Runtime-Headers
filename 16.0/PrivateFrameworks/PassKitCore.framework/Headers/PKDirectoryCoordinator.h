// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDIRECTORYCOORDINATOR_H
#define PKDIRECTORYCOORDINATOR_H

@class NSURL, NSString;
@protocol PKInvalidateObservable;

#import <Foundation/Foundation.h>


@interface PKDirectoryCoordinator : NSObject <PKInvalidateObservable>

 {
    os_unfair_lock_s _lock;
    uint8_t _invalidated;
    NSURL *_url;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithURL:(id)arg0 ;
-(void)invalidate;
-(void)performCoordinatedAction:(id)arg0 ;


@end


#endif