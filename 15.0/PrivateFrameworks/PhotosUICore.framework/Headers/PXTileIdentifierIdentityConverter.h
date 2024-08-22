// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXTILEIDENTIFIERIDENTITYCONVERTER_H
#define PXTILEIDENTIFIERIDENTITYCONVERTER_H

@class NSString;
@protocol PXTileIdentifierConverter;

#import <Foundation/Foundation.h>


@interface PXTileIdentifierIdentityConverter : NSObject <PXTileIdentifierConverter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)reverseTransformTileIdentifier:(struct PXTileIdentifier *)arg0 ;
-(BOOL)transformTileIdentifier:(struct PXTileIdentifier *)arg0 group:(*NSUInteger)arg1 ;


@end


#endif