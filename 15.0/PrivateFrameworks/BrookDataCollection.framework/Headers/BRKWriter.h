// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRKWRITER_H
#define BRKWRITER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BRKWriter : NSObject {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSString *path; // ivar: _path


-(id)initWithPath:(id)arg0 ;
-(void)dealloc;
-(void)performWithLock:(id)arg0 ;


@end


#endif