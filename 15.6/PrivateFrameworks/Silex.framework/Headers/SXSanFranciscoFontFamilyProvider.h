// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXSANFRANCISCOFONTFAMILYPROVIDER_H
#define SXSANFRANCISCOFONTFAMILYPROVIDER_H

@class NSString;
@protocol SXFontFamilyProvider;

#import <Foundation/Foundation.h>

#import "SXSanFranciscoFontFamily.h"

@interface SXSanFranciscoFontFamilyProvider : NSObject <SXFontFamilyProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXSanFranciscoFontFamily *family; // ivar: _family
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)fontFamilies;
-(id)init;


@end


#endif