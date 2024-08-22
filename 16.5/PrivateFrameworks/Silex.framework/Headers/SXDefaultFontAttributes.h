// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXDEFAULTFONTATTRIBUTES_H
#define SXDEFAULTFONTATTRIBUTES_H

@class NSString, NSNumber;
@protocol SXTextStyleFontAttributes;

#import <Foundation/Foundation.h>


@interface SXDefaultFontAttributes : NSObject <SXTextStyleFontAttributes>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) NSNumber *grade;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger style;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger weight;
@property (readonly, nonatomic) NSUInteger weightLabel;
@property (readonly, nonatomic) NSInteger width;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif