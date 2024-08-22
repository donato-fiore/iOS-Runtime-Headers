// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSECTIONEDTILEIDENTIFIERCONVERTER_H
#define PXSECTIONEDTILEIDENTIFIERCONVERTER_H

@class NSArray, NSString, NSIndexSet;
@protocol PXTileIdentifierConverter;

#import <Foundation/Foundation.h>

#import "PXSectionedDataSource.h"

@interface PXSectionedTileIdentifierConverter : NSObject <PXTileIdentifierConverter>



@property (readonly, nonatomic) NSArray *changeDetails; // ivar: _changeDetails
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXSectionedDataSource *fromDataSource; // ivar: _fromDataSource
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSIndexSet *reloadedTileKindsOnObjectChanged; // ivar: _reloadedTileKindsOnObjectChanged
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXSectionedDataSource *toDataSource; // ivar: _toDataSource


-(BOOL)reverseTransformTileIdentifier:(struct PXTileIdentifier *)arg0 ;
-(BOOL)transformTileIdentifier:(struct PXTileIdentifier *)arg0 group:(*NSUInteger)arg1 ;
-(id)init;
-(id)initWithFromDataSource:(id)arg0 toDataSource:(id)arg1 changeDetails:(id)arg2 ;


@end


#endif