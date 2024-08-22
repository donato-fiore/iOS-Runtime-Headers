// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDTEXTSTYLERENDITIONSPEC_H
#define TDTEXTSTYLERENDITIONSPEC_H

@class NSString;


#import "TDRenditionSpec.h"
#import "TDNamedColorProduction.h"

@interface TDTextStyleRenditionSpec : TDRenditionSpec

@property (nonatomic) short alignment;
@property (retain, nonatomic) TDNamedColorProduction *backgroundColor;
@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) float fontSize;
@property (retain, nonatomic) TDNamedColorProduction *foregroundColor;
@property (nonatomic) float maxPointSize;
@property (nonatomic) float minPointSize;
@property (nonatomic) short scalingStyle;


-(id)createCSIRepresentationWithCompression:(BOOL)arg0 colorSpaceID:(NSUInteger)arg1 document:(id)arg2 ;


@end


#endif