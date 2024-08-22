// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHDEFAULTHANDLER_H
#define BLSHDEFAULTHANDLER_H

@class NSString, BLSAttribute, BLSAssertion;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface BLSHDefaultHandler : NSObject <BSInvalidatable>

 {
    NSString *_key;
    BLSAttribute *_attribute;
    BLSAssertion *_lock_assertion;
    os_unfair_lock_s _lock;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)handlerForKey:(id)arg0 attribute:(id)arg1 ;
-(id)initWithKey:(id)arg0 attribute:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)updateForNewValue:(BOOL)arg0 ;


@end


#endif