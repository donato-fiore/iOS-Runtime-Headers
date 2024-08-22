// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAPER_H
#define PKPAPER_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface PKPaper : NSObject {
    NSString *_baseName;
}


@property (readonly, nonatomic) NSString *baseName;
@property (nonatomic) int bottomMargin; // ivar: bottomMargin
@property (readonly, nonatomic) NSUInteger bottomMarginInPoints;
@property (nonatomic) int height; // ivar: height
@property (readonly, nonatomic) CGFloat imageableArea;
@property (readonly, nonatomic) CGRect imageableAreaRect;
@property (readonly, nonatomic) BOOL isBorderless;
@property (readonly, nonatomic) BOOL isRoll;
@property (readonly, nonatomic) BOOL isTransverse; // ivar: _isTransverse
@property (nonatomic) int leftMargin; // ivar: leftMargin
@property (readonly, retain, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSUInteger maxCutLength;
@property (readonly, nonatomic) int maxHeight;
@property (copy, nonatomic) NSDictionary *mediaInfo; // ivar: mediaInfo
@property (readonly, retain, nonatomic) NSString *mediaType;
@property (readonly, retain, nonatomic) NSString *mediaTypeName;
@property (readonly, nonatomic) NSUInteger minCutLength;
@property (readonly, nonatomic) int minHeight;
@property (retain, nonatomic) NSString *name; // ivar: name
@property (readonly, nonatomic) CGSize paperSize;
@property (nonatomic) int rightMargin; // ivar: rightMargin
@property (nonatomic) int topMargin; // ivar: topMargin
@property (readonly, nonatomic) NSUInteger topMarginInPoints;
@property (nonatomic) int width; // ivar: width


+(BOOL)useMetric;
+(BOOL)willAdjustMarginsForDuplexMode:(id)arg0 ;
+(id)defaultGenericPaperForLocale:(id)arg0 ;
+(id)documentPapers;
+(id)generic3_5x5Paper;
+(id)generic4x6Paper;
+(id)genericA4Paper;
+(id)genericA6Paper;
+(id)genericBorderlessWithName:(id)arg0 ;
+(id)genericHagakiPaper;
+(id)genericLegalPaper;
+(id)genericLetterPaper;
+(id)genericPRC32KPaper;
+(id)genericWithName:(id)arg0 ;
+(id)mediaNameForWidth:(int)arg0 Height:(int)arg1 mediaType:(id)arg2 Borderless:(BOOL)arg3 Simplex:(BOOL)arg4 ;
+(id)paperWithAttributes:(id)arg0 ;
+(id)photoPapers;
+(id)rollPaperWithAttributes:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualSize:(id)arg0 ;
-(BOOL)isEqualSizeAndMediaType:(id)arg0 ;
-(NSInteger)sizeAndImageableCompare:(id)arg0 ;
-(NSInteger)sizeMediaTypeAndImageableCompare:(id)arg0 ;
-(NSUInteger)hash;
-(id)cutToLength:(CGFloat)arg0 ;
-(id)cutToPWGLength:(int)arg0 ;
-(id)initWithPWGSize:(struct pwg_size_s *)arg0 localizedName:(id)arg1 codeName:(id)arg2 ;
-(id)initWithWidth:(int)arg0 Height:(int)arg1 Left:(int)arg2 Top:(int)arg3 Right:(int)arg4 Bottom:(int)arg5 localizedName:(id)arg6 codeName:(id)arg7 ;
-(id)nameWithoutSuffixes:(id)arg0 ;
-(id)paperWithMarginsAdjustedForDuplexMode:(id)arg0 ;
-(struct _ipp_s *)createMediaColAndDoMargins:(BOOL)arg0 ;
-(void)addToMediaCol:(struct _ipp_s *)arg0 ;
-(void)dealloc;


@end


#endif