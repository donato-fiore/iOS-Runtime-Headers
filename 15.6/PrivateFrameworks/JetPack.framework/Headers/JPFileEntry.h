// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JPFILEENTRY_H
#define JPFILEENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface JPFileEntry : NSObject

@property (nonatomic) *void backing; // ivar: _backing
@property (readonly, nonatomic) NSString *pathname;
@property (readonly, nonatomic) BOOL releaseBackingOnDealloc; // ivar: _releaseBackingOnDealloc


-(BOOL)writeStream:(id)arg0 toDirectory:(id)arg1 error:(*id)arg2 ;
-(id)initWithBacking:(*void)arg0 releaseOnDealloc:(BOOL)arg1 ;


@end


#endif