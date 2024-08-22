// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXEXPIREDDATA_H
#define ATXEXPIREDDATA_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface ATXExpiredData : NSObject

@property (readonly, nonatomic) NSSet *expiredActionKeys; // ivar: _expiredActionKeys
@property (readonly, nonatomic) NSSet *expiredBundleIds; // ivar: _expiredBundleIds


-(id)init;
-(id)initWithExpiredBundleIds:(id)arg0 expiredActionKeys:(id)arg1 ;


@end


#endif