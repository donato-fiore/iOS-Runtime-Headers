// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSSPECIFIERUPDATEOPERATION_H
#define PSSPECIFIERUPDATEOPERATION_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PSSpecifier.h"

@interface PSSpecifierUpdateOperation : NSObject <NSCopying>



@property (retain, nonatomic) NSNumber *index; // ivar: _index
@property (readonly, nonatomic) NSInteger operation; // ivar: _operation
@property (nonatomic) BOOL removingGroupSpecifierRemovesEntireGroup; // ivar: _removingGroupSpecifierRemovesEntireGroup
@property (retain, nonatomic) PSSpecifier *specifier; // ivar: _specifier
@property (retain, nonatomic) NSNumber *toIndex; // ivar: _toIndex


+(id)_removeOneSpecifierOnlyOperationWithSpecifier:(id)arg0 atIndex:(NSUInteger)arg1 ;
+(id)insertOperationWithSpecifier:(id)arg0 atIndex:(NSUInteger)arg1 ;
+(id)moveOperationWithSpecifier:(id)arg0 fromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 ;
+(id)reloadOperationWithSpecifier:(id)arg0 atIndex:(NSUInteger)arg1 ;
+(id)removeOperationWithSpecifier:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(BOOL)applyToArray:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithOperation:(NSInteger)arg0 specifier:(id)arg1 fromIndex:(id)arg2 toIndex:(id)arg3 ;
-(id)initWithOperation:(NSInteger)arg0 specifier:(id)arg1 fromIndex:(id)arg2 toIndex:(id)arg3 removingGroupSpecifierRemovesEntireGroup:(BOOL)arg4 ;
-(id)initWithOperation:(NSInteger)arg0 specifier:(id)arg1 index:(id)arg2 ;


@end


#endif