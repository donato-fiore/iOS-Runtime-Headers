// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHENVIRONMENTUPDATEDATA_H
#define BLSHENVIRONMENTUPDATEDATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BLSHEnvironmentUpdateData : NSObject

@property (readonly, copy, nonatomic) NSString *environmentIdentifier; // ivar: _environmentIdentifier
@property (readonly, nonatomic) NSInteger newBacklightState; // ivar: _newBacklightState
@property (readonly, nonatomic) NSUInteger pendingTransitionStateCount; // ivar: _pendingTransitionStateCount
@property (readonly, nonatomic) NSUInteger timeStamp; // ivar: _timeStamp


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithEnvironmentIdentifier:(id)arg0 newBacklightState:(NSInteger)arg1 pendingTransitionStateCount:(NSUInteger)arg2 ;


@end


#endif