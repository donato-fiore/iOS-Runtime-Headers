// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFDATAREFRESHCONTEXT_H
#define PBFDATAREFRESHCONTEXT_H

@class NSString, NSDate, NSDictionary;

#import <Foundation/Foundation.h>


@interface PBFDataRefreshContext : NSObject

@property (readonly, nonatomic) NSString *component; // ivar: _component
@property (readonly, nonatomic) NSDate *lastRefreshDate; // ivar: _lastRefreshDate
@property (readonly, nonatomic) NSDate *now; // ivar: _now
@property (readonly, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(id)dynamicDescriptorsRefreshContextForNow:(id)arg0 extension:(id)arg1 lastRefreshDate:(id)arg2 refreshStrategy:(NSInteger)arg3 ;
+(id)staticDescriptorsRefreshContextForNow:(id)arg0 extension:(id)arg1 ;
-(id)initWithComponent:(id)arg0 now:(id)arg1 lastRefreshDate:(id)arg2 userInfo:(id)arg3 ;


@end


#endif