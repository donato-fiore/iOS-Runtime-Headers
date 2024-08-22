// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONLAYOUTDYNAMICSCONFIGURATION_H
#define _UICOLLECTIONLAYOUTDYNAMICSCONFIGURATION_H

@class NSMutableArray, NSArray, NSMutableDictionary, NSString;
@protocol _UICollectionLayoutDynamicsConfiguration;

#import <Foundation/Foundation.h>


@interface _UICollectionLayoutDynamicsConfiguration : NSObject <_UICollectionLayoutDynamicsConfiguration>

 {
    NSMutableArray *_dirtyItems;
    NSArray *_items;
}


@property (retain, nonatomic) NSMutableDictionary *behaviorDict; // ivar: _behaviorDict
@property (nonatomic) CGRect currentVisibleBounds; // ivar: _currentVisibleBounds
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *dynamicItems;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGRect previousVisibleBounds; // ivar: _previousVisibleBounds
@property (readonly) Class superclass;


-(id)_dirtyItems;
-(id)behaviorsForItem:(id)arg0 ;
-(id)init;
-(void)_reset;
-(void)_setBehaviors:(id)arg0 forItem:(id)arg1 ;
-(void)setBehaviors:(id)arg0 forItem:(id)arg1 ;


@end


#endif