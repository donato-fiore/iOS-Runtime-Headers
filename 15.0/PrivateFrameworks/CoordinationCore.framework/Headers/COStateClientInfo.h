// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COSTATECLIENTINFO_H
#define COSTATECLIENTINFO_H

@class NSDictionary, NSSet, NSString;

#import <Foundation/Foundation.h>


@interface COStateClientInfo : NSObject {
    NSDictionary *_state;
    NSDictionary *_observers;
}


@property (readonly, copy, nonatomic) NSSet *clusters; // ivar: _clusters
@property (nonatomic) BOOL disconnected; // ivar: _disconnected
@property (nonatomic) BOOL isWriting; // ivar: _isWriting
@property (readonly, copy, nonatomic) NSDictionary *observers;
@property (readonly, copy, nonatomic) NSDictionary *state;
@property (readonly, copy, nonatomic) NSString *suite; // ivar: _suite


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSuite:(id)arg0 clusters:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)stateForCluster:(id)arg0 ;


@end


#endif