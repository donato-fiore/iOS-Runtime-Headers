// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNTIMEBALLSUBSCRIPTION_H
#define MNTIMEBALLSUBSCRIPTION_H

@class NSString;
@protocol MNJSONOutput, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MNPlannedDestination.h"

@interface MNTimeballSubscription : NSObject <MNJSONOutput, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) MNPlannedDestination *destination; // ivar: _destination
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger options; // ivar: _options
@property (readonly, nonatomic) NSUInteger refreshPolicy; // ivar: _refreshPolicy
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)subscriptionForDestination:(id)arg0 options:(NSInteger)arg1 refreshPolicy:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)jsonDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif