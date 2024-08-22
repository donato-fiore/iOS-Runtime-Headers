// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCOMPOSEDTILEIDENTIFIERCONVERTER_H
#define PXCOMPOSEDTILEIDENTIFIERCONVERTER_H

@class NSArray, NSString;
@protocol PXTileIdentifierConverter;

#import <Foundation/Foundation.h>


@interface PXComposedTileIdentifierConverter : NSObject <PXTileIdentifierConverter>



@property (readonly, copy, nonatomic) NSArray *converters; // ivar: _converters
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)reverseTransformTileIdentifier:(struct PXTileIdentifier *)arg0 ;
-(BOOL)transformTileIdentifier:(struct PXTileIdentifier *)arg0 group:(*NSUInteger)arg1 ;
-(id)init;
-(id)initWithTileIdentifierConverters:(id)arg0 ;


@end


#endif