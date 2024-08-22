// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDEALLOCATIONGUARD_H
#define PKDEALLOCATIONGUARD_H

@class NSString;
@protocol PKInvalidatable;

#import <Foundation/Foundation.h>


@interface PKDeallocationGuard : NSObject <PKInvalidatable>

 {
    uint8_t _invalidated;
    id *_block;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithBlock:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif