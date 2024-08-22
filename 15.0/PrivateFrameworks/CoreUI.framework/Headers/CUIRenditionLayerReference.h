// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIRENDITIONLAYERREFERENCE_H
#define CUIRENDITIONLAYERREFERENCE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CUIRenditionKey.h"

@interface CUIRenditionLayerReference : NSObject

@property (nonatomic) int blendMode; // ivar: _blendMode
@property (nonatomic) BOOL fixedFrame; // ivar: _fixedFrame
@property (nonatomic) CGRect frame; // ivar: _frame
@property (copy, nonatomic) NSString *layerName; // ivar: _layerName
@property (nonatomic) BOOL makeOpaqueIfPossible; // ivar: _makeOpaqueIfPossible
@property (nonatomic) CGFloat opacity; // ivar: _opacity
@property (retain, nonatomic) CUIRenditionKey *referenceKey; // ivar: _referenceKey


-(id)init;
-(void)dealloc;


@end


#endif