// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDMEDIAINFO_H
#define TSDMEDIAINFO_H

@class NSString, TSPData;
@protocol TSDFittingOnInsertion;


#import "TSDStyledInfo.h"
#import "TSDAttribution.h"

@interface TSDMediaInfo : TSDStyledInfo <TSDFittingOnInsertion>

 {
    TSDAttribution *_attribution;
    ? _flags;
}


@property (copy, nonatomic) TSDAttribution *attribution;
@property (readonly, nonatomic) BOOL canBeMediaPlaceholder;
@property (readonly, nonatomic) BOOL canBeReplaced;
@property (readonly, nonatomic) BOOL canResetMediaSize;
@property (readonly, nonatomic) CGPoint centerForReplacingWithNewMedia;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGSize defaultOriginalSize;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int flags;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) TSPData *mediaDataForDragging;
@property (readonly, nonatomic) NSString *mediaDisplayName;
@property (readonly, nonatomic) NSString *mediaFileType;
@property (nonatomic) CGSize originalSize; // ivar: _originalSize
@property (readonly, nonatomic) unsigned short propertyIdForFlagsCommand;
@property (readonly, nonatomic) unsigned short propertyIdForOriginalSizeCommand;
@property (readonly, nonatomic) NSString *propertyNameForFlagsCommand;
@property (readonly, nonatomic) NSString *propertyNameForOriginalSizeCommand;
@property (readonly, nonatomic) CGSize rawDataSize;
@property (readonly, nonatomic) CGSize rawOriginalSize;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wasMediaReplaced;


-(id)copyToInstantiateMasterPlaceholder;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 ;
-(void)scaleDownSizeToFitWithinSize:(struct CGSize )arg0 ;
-(void)setGeometry:(id)arg0 ;
-(void)takePropertiesFromReplacedMediaInfo:(id)arg0 ;
-(void)updateGeometryToReplaceMediaInfo:(id)arg0 ;


@end


#endif