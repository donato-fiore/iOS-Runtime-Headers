// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXINFORMATIONHEURISTICRESULT_H
#define ATXINFORMATIONHEURISTICRESULT_H

@class NSString, NSSet, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXInformationHeuristicResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL hasFailed; // ivar: _hasFailed
@property (readonly, nonatomic) NSString *heuristicName; // ivar: _heuristicName
@property (readonly, nonatomic) NSSet *refreshTriggers; // ivar: _refreshTriggers
@property (readonly, nonatomic) NSArray *suggestions; // ivar: _suggestions


+(BOOL)supportsSecureCoding;
-(id)_safeDecodeObjectOfClass:(Class)arg0 forKey:(id)arg1 withCoder:(id)arg2 nonNull:(BOOL)arg3 ;
-(id)_safeDecodeObjectOfClasses:(id)arg0 forKey:(id)arg1 withCoder:(id)arg2 nonNull:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHeuristicName:(id)arg0 suggestions:(id)arg1 refreshTriggers:(id)arg2 hasFailed:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif