// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SILOGICALTIMESTAMPINTERNAL_H
#define SILOGICALTIMESTAMPINTERNAL_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface SILogicalTimestampInternal : NSObject {
    ? clockIdentifier;
}


@property (nonatomic, readonly) NSUUID *clockIdentifier;
@property (nonatomic, readonly) NSUInteger nanosecondsSinceBoot; // ivar: nanosecondsSinceBoot


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithClockIdentifier:(id)arg0 nanosecondsSinceBoot:(NSUInteger)arg1 ;


@end


#endif