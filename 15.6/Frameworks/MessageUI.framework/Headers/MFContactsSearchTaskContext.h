// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFCONTACTSSEARCHTASKCONTEXT_H
#define MFCONTACTSSEARCHTASKCONTEXT_H

@class NSMutableSet, NSString;
@protocol MFContactsSearchConsumer;

#import <Foundation/Foundation.h>


@interface MFContactsSearchTaskContext : NSObject

@property (readonly, nonatomic) NSObject<MFContactsSearchConsumer> *consumer; // ivar: _consumer
@property (readonly, nonatomic) NSMutableSet *operations; // ivar: _operations
@property (readonly, nonatomic) NSMutableSet *searchQueries; // ivar: _searchQueries
@property (readonly, nonatomic) NSString *text; // ivar: _text


+(id)contextWithConsumer:(id)arg0 text:(id)arg1 operations:(id)arg2 searchQueries:(id)arg3 ;
-(BOOL)done;


@end


#endif