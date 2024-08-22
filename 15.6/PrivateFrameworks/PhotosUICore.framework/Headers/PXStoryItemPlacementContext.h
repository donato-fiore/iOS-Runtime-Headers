// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYITEMPLACEMENTCONTEXT_H
#define PXSTORYITEMPLACEMENTCONTEXT_H

@class NSMutableDictionary, NSString;
@protocol UICoordinateSpace;

#import <Foundation/Foundation.h>

#import "PXGLayout.h"

@interface PXStoryItemPlacementContext : NSObject {
    PXGLayout *_referenceLayout;
    CGPoint _referenceOrigin;
    NSObject<UICoordinateSpace> *_referenceCoordinateSpace;
    NSMutableDictionary *_adjustedPreferredPlacementsByPlacementUUID;
    NSMutableDictionary *_placementUUIDsBySourceIdentifier;
}


@property (readonly, nonatomic) NSString *diagnosticDescription;


-(id)_adjustedPreferredPlacementForPlacement:(id)arg0 ;
-(id)init;
-(id)initWithOriginOfLayout:(id)arg0 atPoint:(struct CGPoint )arg1 inCoordinateSpace:(id)arg2 ;
-(struct CGRect )_convertRect:(struct CGRect )arg0 fromCoordinateSpace:(id)arg1 toLayout:(id)arg2 ;
-(struct CGRect )_convertRect:(struct CGRect )arg0 fromLayout:(id)arg1 toCoordinateSpace:(id)arg2 ;
-(void)_adjustPreferredPlacementInSourceWithIdentifier:(id)arg0 configuration:(id)arg1 ;
-(void)_registerOriginalPlacement:(id)arg0 forSourceIdentifiers:(id)arg1 ;


@end


#endif