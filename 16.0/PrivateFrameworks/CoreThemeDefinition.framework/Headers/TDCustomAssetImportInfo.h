// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDCUSTOMASSETIMPORTINFO_H
#define TDCUSTOMASSETIMPORTINFO_H

@class NSString, NSDate, CUIRenditionKey;
@protocol TDCustomAssetSource;

#import <Foundation/Foundation.h>


@interface TDCustomAssetImportInfo : NSObject

@property (nonatomic) CGRect alignmentRect; // ivar: _alignmentRect
@property (retain) NSObject<TDCustomAssetSource> *customAsset; // ivar: _customAsset
@property (copy, nonatomic) NSString *elementName; // ivar: _elementName
@property (nonatomic) BOOL isTemplate;
@property (copy, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL optOutOfThinning; // ivar: _optOutOfThinning
@property (copy, nonatomic) NSString *partName; // ivar: _partName
@property (copy, nonatomic) CUIRenditionKey *renditionKey; // ivar: _renditionKey
@property (nonatomic) NSInteger renditionType; // ivar: _renditionType
@property (nonatomic) CGSize resizableSliceSize; // ivar: _resizableSliceSize
@property (nonatomic) NSInteger resizingMode; // ivar: _resizingMode
@property (nonatomic) ? sliceInsets; // ivar: _sliceInsets
@property (nonatomic) NSInteger templateRenderingMode; // ivar: _templateRenderingMode


-(NSInteger)renditionSubtype;
-(void)dealloc;


@end


#endif