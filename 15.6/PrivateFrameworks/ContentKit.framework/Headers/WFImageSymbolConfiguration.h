// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFIMAGESYMBOLCONFIGURATION_H
#define WFIMAGESYMBOLCONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface WFImageSymbolConfiguration : NSObject

@property (readonly, copy, nonatomic) NSArray *hierarchicalColors; // ivar: _hierarchicalColors
@property (readonly, nonatomic) CGFloat pointSize; // ivar: _pointSize
@property (nonatomic) NSUInteger weight; // ivar: _weight


+(id)configurationWithPointSize:(CGFloat)arg0 ;
+(id)configurationWithPointSize:(CGFloat)arg0 hierarchicalColors:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)platformWeight;
-(id)initWithPointSize:(CGFloat)arg0 hierarchicalColors:(id)arg1 ;
-(id)platformHierarchicalColors;
-(id)uiKitConfiguration;


@end


#endif