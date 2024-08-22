// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXFONTATTRIBUTES_H
#define SXFONTATTRIBUTES_H

@class NSString, NSNumber;
@protocol SXFontAttributes;

#import <Foundation/Foundation.h>


@interface SXFontAttributes : NSObject <SXFontAttributes>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *familyName; // ivar: _familyName
@property (readonly, nonatomic) NSNumber *grade; // ivar: _grade
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger weight; // ivar: _weight
@property (readonly, nonatomic) NSInteger width; // ivar: _width


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFamilyName:(id)arg0 weight:(NSInteger)arg1 width:(NSInteger)arg2 style:(NSInteger)arg3 ;
-(id)initWithFamilyName:(id)arg0 weight:(NSInteger)arg1 width:(NSInteger)arg2 style:(NSInteger)arg3 grade:(id)arg4 ;
-(id)stringForStyle:(NSInteger)arg0 ;
-(id)stringForWeight:(NSInteger)arg0 ;
-(id)stringForWidth:(NSInteger)arg0 ;


@end


#endif