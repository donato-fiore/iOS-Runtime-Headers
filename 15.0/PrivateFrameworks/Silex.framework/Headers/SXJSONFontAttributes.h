// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXJSONFONTATTRIBUTES_H
#define SXJSONFONTATTRIBUTES_H

@class NSString;
@protocol SXFontAttributes;


#import "SXJSONObject.h"

@interface SXJSONFontAttributes : SXJSONObject <SXFontAttributes>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger style;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger weight;
@property (readonly, nonatomic) NSInteger width;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)styleWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)weightWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)widthWithValue:(id)arg0 withType:(int)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif