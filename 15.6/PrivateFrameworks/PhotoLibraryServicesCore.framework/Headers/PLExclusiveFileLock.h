// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLEXCLUSIVEFILELOCK_H
#define PLEXCLUSIVEFILELOCK_H

@class NSURL, NSString;
@protocol PLUnlocker;

#import <Foundation/Foundation.h>


@interface PLExclusiveFileLock : NSObject <PLUnlocker>

 {
    NSURL *_url;
    int _fd;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isLocked;
@property (readonly) Class superclass;


-(BOOL)lockWithError:(*id)arg0 ;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)lockData;
-(id)lockFailure;
-(void)dealloc;
-(void)unlock;


@end


#endif