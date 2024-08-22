// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SILOGICALTIMESTAMP_H
#define SILOGICALTIMESTAMP_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "SILogicalTimestampInternal.h"

@interface SILogicalTimestamp : NSObject {
    SILogicalTimestampInternal *_underlying;
}


@property (readonly, nonatomic) NSUUID *clockIdentifier;
@property (readonly, nonatomic) NSUInteger nanoSecondsSinceBoot;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithClockIdentifier:(id)arg0 nanosecondsSinceBoot:(NSUInteger)arg1 ;
-(id)initWithInternalType:(id)arg0 ;
-(id)underlying;


@end


#endif