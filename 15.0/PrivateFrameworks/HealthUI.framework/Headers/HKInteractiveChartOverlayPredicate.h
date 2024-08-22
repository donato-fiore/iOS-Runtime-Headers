// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKINTERACTIVECHARTOVERLAYPREDICATE_H
#define HKINTERACTIVECHARTOVERLAYPREDICATE_H

@class NSString, NSPredicate;

#import <Foundation/Foundation.h>


@interface HKInteractiveChartOverlayPredicate : NSObject

@property (readonly, nonatomic) NSString *localizedNameKey; // ivar: _localizedNameKey
@property (readonly, nonatomic) NSPredicate *predicate; // ivar: _predicate


-(id)initWithPredicate:(id)arg0 name:(id)arg1 ;


@end


#endif