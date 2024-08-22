// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFIMAGESYMBOLCONFIGURATION_H
#define WFIMAGESYMBOLCONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface WFImageSymbolConfiguration : NSObject

@property (readonly, copy, nonatomic) NSArray *hierarchicalColors; // ivar: _hierarchicalColors
@property (readonly, nonatomic) id *platformSymbolConfiguration; // ivar: _platformSymbolConfiguration
@property (readonly, nonatomic) CGFloat pointSize; // ivar: _pointSize
@property (readonly, nonatomic) NSUInteger representationType; // ivar: _representationType
@property (nonatomic) NSUInteger weight; // ivar: _weight


+(id)configurationWithNSImageSymbolConfiguration:(id)arg0 ;
+(id)configurationWithPointSize:(CGFloat)arg0 ;
+(id)configurationWithPointSize:(CGFloat)arg0 hierarchicalColors:(id)arg1 ;
+(id)configurationWithUIImageSymbolConfiguration:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)platformWeight;
-(id)initWithPlatformSymbolConfiguration:(id)arg0 ;
-(id)initWithPointSize:(CGFloat)arg0 hierarchicalColors:(id)arg1 ;
-(id)platformHierarchicalColors;
-(id)uiKitConfiguration;


@end


#endif