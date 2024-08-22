// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASCOLLABACTIVITYDATA_H
#define ICASCOLLABACTIVITYDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASClickContext.h"
#import "ICASCollabActivityContextPath.h"
#import "ICASMode.h"

@interface ICASCollabActivityData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASClickContext *clickContext; // ivar: _clickContext
@property (readonly, nonatomic) ICASCollabActivityContextPath *collabActivityContextPath; // ivar: _collabActivityContextPath
@property (readonly, nonatomic) NSNumber *hasRecentUpdates; // ivar: _hasRecentUpdates
@property (readonly, nonatomic) NSNumber *isUserMentioned; // ivar: _isUserMentioned
@property (readonly, nonatomic) ICASMode *mode; // ivar: _mode


+(id)dataName;
-(id)initWithCollabActivityContextPath:(id)arg0 clickContext:(id)arg1 mode:(id)arg2 isUserMentioned:(id)arg3 hasRecentUpdates:(id)arg4 ;
-(id)toDict;


@end


#endif