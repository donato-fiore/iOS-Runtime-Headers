// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFDATAFRESHNESSSTATE_H
#define PBFDATAFRESHNESSSTATE_H

@class NSSet, NSString;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface PBFDataFreshnessState : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSSet *dataComponents; // ivar: _dataComponents
@property (readonly, nonatomic, getter=isFresh) BOOL fresh;
@property (readonly, nonatomic) NSSet *freshComponents;
@property (readonly, nonatomic) NSString *freshnessDebugDescription;
@property (retain, nonatomic) NSSet *freshnessProviders; // ivar: _freshnessProviders
@property (readonly, nonatomic) NSSet *outOfDateComponents;


+(id)new;
-(BOOL)isDataComponentFresh:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithFreshnessProvider:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)enumerateComponentEntities:(id)arg0 ;


@end


#endif