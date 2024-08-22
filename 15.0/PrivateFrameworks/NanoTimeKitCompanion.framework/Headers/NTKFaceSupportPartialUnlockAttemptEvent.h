// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKFACESUPPORTPARTIALUNLOCKATTEMPTEVENT_H
#define NTKFACESUPPORTPARTIALUNLOCKATTEMPTEVENT_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface NTKFaceSupportPartialUnlockAttemptEvent : NSObject

@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger method; // ivar: _method


-(id)initWithIdentifier:(id)arg0 method:(NSUInteger)arg1 ;
-(id)unlockAttemptWithStatus:(NSUInteger)arg0 errorCode:(NSInteger)arg1 ;


@end


#endif