// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDASSET_H
#define TDASSET_H

@class NSManagedObject, NSString;


#import "TDThemeBitSource.h"
#import "TDTemplateRenderingMode.h"

@interface TDAsset : NSManagedObject {
    unsigned int _scaleFactor;
}


@property (readonly, nonatomic) NSString *baseName;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) TDThemeBitSource *source;
@property (retain, nonatomic) TDTemplateRenderingMode *templateRenderingMode;


+(BOOL)isTemplateFromImageFilename:(id)arg0 ;
+(NSInteger)idiomFromImageFilename:(id)arg0 ;
+(NSInteger)subtypeFromImageFilename:(id)arg0 ;
+(unsigned int)scaleFactorFromImageFilename:(id)arg0 ;
-(BOOL)hasProduction;
-(id)fileURLWithDocument:(id)arg0 ;
-(unsigned int)scaleFactor;
-(void)setHasProduction:(id)arg0 ;
-(void)setScaleFactor:(unsigned int)arg0 ;


@end


#endif