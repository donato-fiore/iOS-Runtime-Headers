// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONLAYOUTSECTIONGEOMETRYTRANSLATOR_H
#define _UICOLLECTIONLAYOUTSECTIONGEOMETRYTRANSLATOR_H


#import <Foundation/Foundation.h>


@interface _UICollectionLayoutSectionGeometryTranslator : NSObject {
    CGSize _contentSize;
    NSUInteger _layoutAxis;
    BOOL _layoutRTL;
    NSDirectionalEdgeInsets _supplementaryInsets;
    NSDirectionalEdgeInsets _sectionInsets;
    CGRect _contentFrame;
    CGRect _effectiveFrame;
}




-(id)description;


@end


#endif