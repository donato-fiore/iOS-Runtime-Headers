// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIANALYTICSLOGICALTIMESTAMP_H
#define SIRIANALYTICSLOGICALTIMESTAMP_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface SiriAnalyticsLogicalTimeStamp : NSObject

@property (readonly, nonatomic) NSUUID *clockIdentifier; // ivar: _clockIdentifier
@property (readonly, nonatomic) NSUInteger nanoSecondsSinceBoot; // ivar: _nanoSecondsSinceBoot


-(id)init;
-(id)initWithMachAbsoluteTime:(NSUInteger)arg0 clockIdentifier:(id)arg1 ;
-(id)loggingRepresentation;


@end


#endif