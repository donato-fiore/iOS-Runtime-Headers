// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MGOUTSTANDINGQUERY_H
#define MGOUTSTANDINGQUERY_H

@class NSUUID, NSPredicate;

#import <Foundation/Foundation.h>


@interface MGOutstandingQuery : NSObject

@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (readonly, nonatomic) BOOL requiresTopology; // ivar: _requiresTopology


-(BOOL)_predicateRequiresCurrentDevice:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 ;


@end


#endif