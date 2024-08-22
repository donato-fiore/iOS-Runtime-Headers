// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXSYSTEMFONTFAMILYPROVIDER_H
#define SXSYSTEMFONTFAMILYPROVIDER_H

@class NSString, NSArray;
@protocol SXFontFamilyProvider;

#import <Foundation/Foundation.h>


@interface SXSystemFontFamilyProvider : NSObject <SXFontFamilyProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *fonts; // ivar: _fonts
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)fontFamilies;
-(id)fontsForMetadata:(id)arg0 ;
-(id)init;
-(id)initWithFontMetaData:(id)arg0 ;


@end


#endif