// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STACTIVITYATTRIBUTIONLIST_H
#define STACTIVITYATTRIBUTIONLIST_H

@class NSArray, NSString;
@protocol STStatusDomainData, STStatusDomainDataDifferencing, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "STListData.h"

@interface STActivityAttributionList : NSObject <STStatusDomainData, STStatusDomainDataDifferencing, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *attributions;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) STListData *listData; // ivar: _listData
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithListData:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataByApplyingDiff:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)diffFromData:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithListData:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateAttributionsUsingBlock:(id)arg0 ;


@end


#endif