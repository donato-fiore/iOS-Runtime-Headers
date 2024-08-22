// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSSUBSCRIPTIONLABEL_H
#define TPSSUBSCRIPTIONLABEL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TPSSubscriptionLabel : NSObject

@property (readonly, nonatomic) NSString *localizedBadgeLabel; // ivar: _localizedBadgeLabel
@property (readonly, nonatomic) NSString *localizedLongLabel; // ivar: _localizedLongLabel
@property (readonly, nonatomic) NSString *unlocalizedLongLabel; // ivar: _unlocalizedLongLabel


+(id)labelsFromUnlocalizedLabels:(id)arg0 localizedLongLabels:(id)arg1 localizedBadgeLabels:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSubscriptionLabel:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithUnlocalizedLabel:(id)arg0 localizedLongLabel:(id)arg1 localizedBadgeLabel:(id)arg2 ;


@end


#endif