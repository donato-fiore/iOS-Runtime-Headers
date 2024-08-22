// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUICOMPONENTCONSTRAINTFACTORY_H
#define SIRIUICOMPONENTCONSTRAINTFACTORY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SiriUIComponentConstraintFactory : NSObject {
    NSMutableDictionary *_layoutStyleToComponentLayoutMaps;
}




+(id)sharedConstraintFactory;
-(NSInteger)_layoutAttributeForView:(id)arg0 componentType:(NSUInteger)arg1 isLower:(BOOL)arg2 ;
-(NSUInteger)_componentTypeForView:(id)arg0 component:(id)arg1 ;
-(id)_bestDistanceFromComponentType:(NSUInteger)arg0 toComponentType:(NSUInteger)arg1 layoutStyle:(NSInteger)arg2 ;
-(id)_createMapForLayoutStyle:(NSInteger)arg0 ;
-(id)bottomConstraintForView:(id)arg0 fromLayoutGuide:(id)arg1 templateComponent:(id)arg2 layoutStyle:(NSInteger)arg3 ;
-(id)bottomConstraintForView:(id)arg0 inSuperview:(id)arg1 templateComponent:(id)arg2 layoutStyle:(NSInteger)arg3 ;
-(id)init;
-(id)topConstraintForView:(id)arg0 fromLayoutGuide:(id)arg1 templateComponent:(id)arg2 layoutStyle:(NSInteger)arg3 ;
-(id)topConstraintForView:(id)arg0 inSuperview:(id)arg1 templateComponent:(id)arg2 layoutStyle:(NSInteger)arg3 ;
-(id)verticalConstraintFromUpperView:(id)arg0 lowerView:(id)arg1 upperTemplateComponent:(id)arg2 lowerTemplateComponent:(id)arg3 layoutStyle:(NSInteger)arg4 ;
-(void)_addConstants:(id)arg0 forLowerComponentStyle:(NSUInteger)arg1 toMap:(id)arg2 ;
-(void)_setupMaps;


@end


#endif