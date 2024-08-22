// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSRELATION_H
#define CLSRELATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CLSRelation : NSObject

@property (readonly, nonatomic, getter=isFaultable) BOOL faultable; // ivar: _faultable
@property (readonly, nonatomic) Class fromEntity; // ivar: _fromEntity
@property (readonly, nonatomic) NSString *fromKey; // ivar: _fromKey
@property (readonly, nonatomic) Class toEntity; // ivar: _toEntity
@property (readonly, nonatomic) NSString *toKey; // ivar: _toKey


-(BOOL)isEquivalentToRelation:(id)arg0 ;
-(BOOL)isInverseOfRelation:(id)arg0 ;
-(id)description;
-(id)initWithFromEntity:(Class)arg0 toEntity:(Class)arg1 onFromKey:(id)arg2 toKey:(id)arg3 faultable:(BOOL)arg4 ;


@end


#endif