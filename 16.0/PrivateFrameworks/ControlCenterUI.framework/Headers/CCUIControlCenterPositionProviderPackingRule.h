// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCUICONTROLCENTERPOSITIONPROVIDERPACKINGRULE_H
#define CCUICONTROLCENTERPOSITIONPROVIDERPACKINGRULE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CCUIControlCenterPositionProviderPackingRule : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger packFrom; // ivar: _packFrom
@property (readonly, nonatomic) NSUInteger packingOrder; // ivar: _packingOrder
@property (readonly, nonatomic) CCUILayoutSize sizeLimit; // ivar: _sizeLimit


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPackFrom:(NSUInteger)arg0 packingOrder:(NSUInteger)arg1 sizeLimit:(struct CCUILayoutSize )arg2 ;


@end


#endif