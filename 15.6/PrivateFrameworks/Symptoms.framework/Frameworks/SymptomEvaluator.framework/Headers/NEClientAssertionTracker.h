// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NECLIENTASSERTIONTRACKER_H
#define NECLIENTASSERTIONTRACKER_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface NEClientAssertionTracker : NSObject

@property (nonatomic) NSUInteger count; // ivar: _count
@property (nonatomic) BOOL hasAppRecord; // ivar: _hasAppRecord
@property (retain, nonatomic) NSUUID *processUUID; // ivar: _processUUID


-(id)description;


@end


#endif