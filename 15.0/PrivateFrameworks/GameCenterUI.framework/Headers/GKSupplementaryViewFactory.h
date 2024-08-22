// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKSUPPLEMENTARYVIEWFACTORY_H
#define GKSUPPLEMENTARYVIEWFACTORY_H


#import <Foundation/Foundation.h>


@interface GKSupplementaryViewFactory : NSObject

@property (readonly, nonatomic) SEL configurator; // ivar: _configurator
@property (retain, nonatomic) Class reusableViewClass; // ivar: _reusableViewClass
@property (nonatomic) SEL selector; // ivar: _selector
@property (weak, nonatomic) id *target; // ivar: _target


+(id)factoryForClass:(Class)arg0 target:(id)arg1 configurator:(SEL)arg2 ;
+(id)factoryForClass:(Class)arg0 target:(id)arg1 configurator:(SEL)arg2 userData:(id)arg3 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithClass:(Class)arg0 target:(id)arg1 configurator:(SEL)arg2 userData:(id)arg3 ;


@end


#endif