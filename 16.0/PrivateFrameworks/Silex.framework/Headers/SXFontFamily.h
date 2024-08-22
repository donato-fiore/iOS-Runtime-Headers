// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXFONTFAMILY_H
#define SXFONTFAMILY_H

@class NSString, NSSet;
@protocol SXFontFamily;

#import <Foundation/Foundation.h>


@interface SXFontFamily : NSObject <SXFontFamily>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *familyName; // ivar: _familyName
@property (readonly, nonatomic) NSSet *fontFaces; // ivar: _fontFaces
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)fontFaceWithAttributes:(id)arg0 size:(NSInteger)arg1 ;
-(id)initWithFamilyName:(id)arg0 faces:(id)arg1 ;


@end


#endif