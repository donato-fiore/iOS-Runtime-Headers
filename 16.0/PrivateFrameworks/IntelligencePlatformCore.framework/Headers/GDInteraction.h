// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDINTERACTION_H
#define GDINTERACTION_H

@class NSString, NSDate, NSArray;

#import <Foundation/Foundation.h>

#import "GDContact.h"

@interface GDInteraction : NSObject

@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) NSInteger direction; // ivar: _direction
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSInteger mechanism; // ivar: _mechanism
@property (readonly, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly, nonatomic) GDContact *sender; // ivar: _sender
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 bundleId:(id)arg2 mechanism:(NSInteger)arg3 direction:(NSInteger)arg4 sender:(id)arg5 recipients:(id)arg6 ;


@end


#endif