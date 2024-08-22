// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OITSUKVOTOKEN_H
#define OITSUKVOTOKEN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface OITSUKVOToken : NSObject

@property (readonly, nonatomic) *void context; // ivar: _context
@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly, nonatomic) NSObject *observer; // ivar: _observer
@property (readonly, nonatomic) NSObject *target; // ivar: _target


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithObserver:(id)arg0 target:(id)arg1 keyPath:(id)arg2 context:(*void)arg3 ;
-(void)dealloc;


@end


#endif