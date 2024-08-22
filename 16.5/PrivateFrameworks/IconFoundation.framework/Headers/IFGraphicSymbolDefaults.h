// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IFGRAPHICSYMBOLDEFAULTS_H
#define IFGRAPHICSYMBOLDEFAULTS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IFGraphicSymbolDefaults : NSObject

@property (readonly) NSInteger enclosureColor; // ivar: _enclosureColor
@property (readonly) NSInteger enclosureColorAlternate; // ivar: _enclosureColorAlternate
@property (readonly) CGFloat enclosureSizeMultiplier; // ivar: _enclosureSizeMultiplier
@property (readonly) NSInteger fill; // ivar: _fill
@property (readonly) NSInteger renderingMode; // ivar: _renderingMode
@property (readonly) NSInteger shape; // ivar: _shape
@property (readonly) NSInteger symbolColor; // ivar: _symbolColor
@property (readonly) NSInteger symbolColorAlternate; // ivar: _symbolColorAlternate
@property (readonly) NSString *symbolName; // ivar: _symbolName


+(id)sharedInstance;
-(id)init;


@end


#endif