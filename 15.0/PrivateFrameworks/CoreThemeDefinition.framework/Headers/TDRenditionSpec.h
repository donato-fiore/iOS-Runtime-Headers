// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TDRENDITIONSPEC_H
#define TDRENDITIONSPEC_H

@class NSManagedObject, NSDate, NSSet;


#import "TDRenditionKeySpec.h"
#import "TDRenditionSpec.h"
#import "TDElementProduction.h"
#import "TDRenditionType.h"

@interface TDRenditionSpec : NSManagedObject

@property (nonatomic) BOOL alphaCrop;
@property (retain, nonatomic) NSDate *dateOfLastChange;
@property (nonatomic) int height;
@property (retain, nonatomic) TDRenditionKeySpec *keySpec;
@property (nonatomic) BOOL monochrome;
@property (nonatomic) BOOL opaque;
@property (nonatomic) CGPoint packedPoint;
@property (nonatomic) int packedPointX;
@property (nonatomic) int packedPointY;
@property (retain, nonatomic) NSSet *packedRenditions;
@property (retain, nonatomic) TDRenditionSpec *parentRendition;
@property (retain, nonatomic) TDElementProduction *production;
@property (retain, nonatomic) NSSet *properties;
@property (retain, nonatomic) TDRenditionType *renditionType;
@property (nonatomic) int width;


-(BOOL)canBePackedWithDocument:(id)arg0 ;
-(BOOL)updatePackingPropertiesWithDocument:(id)arg0 ;
-(id)createCSIRepresentationWithCompression:(BOOL)arg0 colorSpaceID:(NSUInteger)arg1 document:(id)arg2 ;
-(void)awakeFromInsert;
-(void)drawPackableRenditionInContext:(struct CGContext *)arg0 withDocument:(id)arg1 ;
-(void)resetToBaseKeySpec;


@end


#endif