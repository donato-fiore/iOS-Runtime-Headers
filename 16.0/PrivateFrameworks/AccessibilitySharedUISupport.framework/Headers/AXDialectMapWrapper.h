// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXDIALECTMAPWRAPPER_H
#define AXDIALECTMAPWRAPPER_H

@class AXDialectMap, NSString;

#import <Foundation/Foundation.h>


@interface AXDialectMapWrapper : NSObject

@property (retain, nonatomic) AXDialectMap *dialectMap; // ivar: _dialectMap
@property (retain, nonatomic) NSString *languageNameAndLocaleInCurrentLocale; // ivar: _languageNameAndLocaleInCurrentLocale
@property (retain, nonatomic) NSString *languageNameInCurrentLocale; // ivar: _languageNameInCurrentLocale


-(id)initWithDialectMap:(id)arg0 ;


@end


#endif