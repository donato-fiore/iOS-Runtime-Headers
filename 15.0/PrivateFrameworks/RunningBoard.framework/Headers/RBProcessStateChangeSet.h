// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBPROCESSSTATECHANGESET_H
#define RBPROCESSSTATECHANGESET_H

@class NSMutableDictionary;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface RBProcessStateChangeSet : NSObject <NSFastEnumeration>

 {
    NSMutableDictionary *_stateChangesByIdentity;
}


@property (readonly, nonatomic) BOOL hasChanges;


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithChanges:(id)arg0 ;
-(id)initWithOriginalStatesByIdentity:(id)arg0 updatedStatesByIdentity:(id)arg1 ;
-(id)processIdentities;
-(id)processStateChangeForIdentity:(id)arg0 ;
-(void)applyChanges:(id)arg0 ;


@end


#endif