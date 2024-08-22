// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIREPLICASOURCEOBSERVERBOX_H
#define PBUIREPLICASOURCEOBSERVERBOX_H

@class BSCompoundAssertion, NSString;
@protocol NSFastEnumeration, PBUIPosterReplicaSourceObserver, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface PBUIReplicaSourceObserverBox : NSObject <NSFastEnumeration, PBUIPosterReplicaSourceObserver, BSInvalidatable>

 {
    BOOL _wasLastActive;
    BSCompoundAssertion *_sharedUpdateAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger effectiveStyle;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 activeStateDidChangeHandler:(id)arg1 ;
-(id)registerSourceObserver:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)setNeedsSourceUpdate;


@end


#endif