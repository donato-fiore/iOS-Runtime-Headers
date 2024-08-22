// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TDNAMEDCOLORRENDITIONSPEC_H
#define TDNAMEDCOLORRENDITIONSPEC_H

@class NSString;


#import "TDRenditionSpec.h"

@interface TDNamedColorRenditionSpec : TDRenditionSpec

@property (nonatomic) CGFloat alpha;
@property (nonatomic) CGFloat blue;
@property (nonatomic) NSInteger colorSpaceID;
@property (nonatomic) CGFloat green;
@property (nonatomic) CGFloat red;
@property (retain, nonatomic) NSString *systemColorName;


-(id)createCSIRepresentationWithCompression:(BOOL)arg0 colorSpaceID:(NSUInteger)arg1 document:(id)arg2 ;
-(void)setColorPropertiesFromCGColor:(struct CGColor *)arg0 ;


@end


#endif