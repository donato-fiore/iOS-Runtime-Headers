// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFSTATEDUMPBUILDERCONTEXT_H
#define HFSTATEDUMPBUILDERCONTEXT_H

@class NSString, NSSet, NSDictionary;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface HFStateDumpBuilderContext : NSObject <NSCopying, NSMutableCopying>



@property (nonatomic) NSUInteger detailLevel; // ivar: _detailLevel
@property (nonatomic) BOOL excludePrimaryID; // ivar: _excludePrimaryID
@property (nonatomic) BOOL includeVolatileObjects; // ivar: _includeVolatileObjects
@property (copy, nonatomic) NSString *multilinePrefix; // ivar: _multilinePrefix
@property (copy, nonatomic) NSSet *objectsToExclude; // ivar: _objectsToExclude
@property (nonatomic) NSUInteger outputStyle; // ivar: _outputStyle
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(id)contextWithDetailLevel:(NSUInteger)arg0 ;
-(NSUInteger)derivedOutputStyle;
-(id)copyWithDetailLevel:(NSUInteger)arg0 ;
-(id)copyWithOutputStyle:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(id)initWithDetailLevel:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif