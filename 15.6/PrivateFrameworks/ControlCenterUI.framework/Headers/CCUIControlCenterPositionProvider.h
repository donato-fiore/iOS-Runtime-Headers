// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCUICONTROLCENTERPOSITIONPROVIDER_H
#define CCUICONTROLCENTERPOSITIONPROVIDER_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface CCUIControlCenterPositionProvider : NSObject {
    NSArray *_packingRules;
    NSDictionary *_rectByIdentifier;
}


@property (readonly, nonatomic) CCUILayoutSize layoutSize; // ivar: _layoutSize
@property (readonly, nonatomic) CCUILayoutSize maximumLayoutSize;


-(id)_generateRectByIdentifierWithOrderedIdentifiers:(id)arg0 orderedSizes:(id)arg1 packingOrder:(NSUInteger)arg2 startPosition:(struct CCUILayoutPoint )arg3 maximumSize:(struct CCUILayoutSize )arg4 outputLayoutSize:(struct CCUILayoutSize *)arg5 ;
-(id)initWithPackingRules:(id)arg0 ;
-(struct CCUILayoutRect )layoutRectForIdentifier:(id)arg0 ;
-(void)regenerateRectsWithOrderedIdentifiers:(id)arg0 orderedSizes:(id)arg1 ;


@end


#endif