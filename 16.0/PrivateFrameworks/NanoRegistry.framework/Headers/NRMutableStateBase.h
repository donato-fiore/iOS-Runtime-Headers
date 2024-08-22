// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRMUTABLESTATEBASE_H
#define NRMUTABLESTATEBASE_H

@class NSMutableSet, NSString;
@protocol NRMutableStateProtocol, NRMutableStateParentDelegate;

#import <Foundation/Foundation.h>


@interface NRMutableStateBase : NSObject <NRMutableStateProtocol>

 {
    NSMutableSet *_observers;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<NRMutableStateParentDelegate> *parentDelegate; // ivar: _parentDelegate
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)classTypes;
+(id)diffFrom:(id)arg0 to:(id)arg1 ;
+(id)enclosedClassTypes;
-(BOOL)isEqual:(id)arg0 ;
-(id)addObserverQueue:(id)arg0 withBlock:(id)arg1 ;
-(id)applyDiff:(id)arg0 ;
-(id)applyDiff:(id)arg0 upOnly:(BOOL)arg1 notifyParent:(BOOL)arg2 unconditional:(BOOL)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)notifyObserversWithDiff:(id)arg0 ;
-(void)notifyParentWithDiff:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif