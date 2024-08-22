// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRSERVERMETRICS_H
#define BRSERVERMETRICS_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BRServerMetrics : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *childCount; // ivar: _childCount
@property (retain, nonatomic) NSNumber *quotaUsed; // ivar: _quotaUsed
@property (retain, nonatomic) NSNumber *recursiveChildCount; // ivar: _recursiveChildCount
@property (retain, nonatomic) NSNumber *sharedAliasRecursiveCount; // ivar: _sharedAliasRecursiveCount
@property (retain, nonatomic) NSNumber *sharedByMeRecursiveCount; // ivar: _sharedByMeRecursiveCount


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initFromResultSet:(id)arg0 pos:(int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServerMetrics:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif