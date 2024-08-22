// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXEXECUTABLEREFERENCE_H
#define ATXEXECUTABLEREFERENCE_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXExecutableReference : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *clientModelId; // ivar: _clientModelId
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) BOOL shouldClearOnEngagement; // ivar: _shouldClearOnEngagement
@property (nonatomic) BOOL shouldPurge; // ivar: _shouldPurge
@property (nonatomic) BOOL suggestionIsHidden; // ivar: _suggestionIsHidden


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithClientModelId:(id)arg0 date:(id)arg1 shouldClearOnEngagement:(BOOL)arg2 ;
-(id)initWithClientModelId:(id)arg0 date:(id)arg1 shouldClearOnEngagement:(BOOL)arg2 shouldPurge:(BOOL)arg3 suggestionIsHidden:(BOOL)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)jsonDict;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateDateTo:(id)arg0 ;


@end


#endif