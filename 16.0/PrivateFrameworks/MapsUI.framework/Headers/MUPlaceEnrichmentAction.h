// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACEENRICHMENTACTION_H
#define MUPLACEENRICHMENTACTION_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MUPlaceEnrichmentAction : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger actionType; // ivar: _actionType
@property (readonly, nonatomic) NSDictionary *enrichmentAction; // ivar: _enrichmentAction
@property (readonly, nonatomic) NSUInteger mkActionType; // ivar: _mkActionType


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithActionType:(NSUInteger)arg0 isValidated:(BOOL)arg1 mkActionType:(NSUInteger)arg2 ;
-(id)initWithActionType:(NSUInteger)arg0 isValidated:(BOOL)arg1 mkActionType:(NSUInteger)arg2 metadata:(id)arg3 ;


@end


#endif