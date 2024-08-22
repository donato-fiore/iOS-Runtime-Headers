// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXJSONCOLLECTIONCONTENTDISPLAY_H
#define SXJSONCOLLECTIONCONTENTDISPLAY_H

@class NSString;
@protocol SXCollectionContentDisplay;


#import "SXJSONObject.h"

@interface SXJSONCollectionContentDisplay : SXJSONObject <SXCollectionContentDisplay>



@property (readonly, nonatomic) NSUInteger alignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger distribution;
@property (readonly, nonatomic) _SXConvertibleValue gutter;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _SXConvertibleValue maximumWidth;
@property (readonly, nonatomic) _SXConvertibleValue minimumWidth;
@property (readonly, nonatomic) _SXConvertibleValue rowSpacing;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL variableSizing;
@property (readonly, nonatomic) NSUInteger widows;


+(id)typeString;
-(NSUInteger)alignmentWithValue:(id)arg0 withType:(int)arg1 ;
-(NSUInteger)distributionWithValue:(id)arg0 withType:(int)arg1 ;
-(NSUInteger)widowsWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif