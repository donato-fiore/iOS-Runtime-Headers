// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTTODAYHEADLINEPROTOITEM_H
#define NTTODAYHEADLINEPROTOITEM_H

@class NSURL, NSString, SFSearchResult;
@protocol NTTodayProtoitem, FCHeadlineProviding;

#import <Foundation/Foundation.h>


@interface NTTodayHeadlineProtoitem : NSObject <NTTodayProtoitem>



@property (readonly, copy, nonatomic) NSURL *actionURL; // ivar: _actionURL
@property (readonly, copy, nonatomic) NSObject<FCHeadlineProviding> *headline; // ivar: _headline
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) SFSearchResult *searchResult; // ivar: _searchResult


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)assetHandlesWithOperationInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 headline:(id)arg1 searchResult:(id)arg2 actionURL:(id)arg3 ;
-(id)itemWithContentContext:(id)arg0 operationInfo:(id)arg1 sectionDescriptor:(id)arg2 todayData:(id)arg3 assetFileURLsByRemoteURL:(id)arg4 preferredDynamicSlotAllocation:(NSUInteger)arg5 ;


@end


#endif