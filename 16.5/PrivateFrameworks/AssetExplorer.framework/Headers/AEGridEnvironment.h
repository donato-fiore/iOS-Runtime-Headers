// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AEGRIDENVIRONMENT_H
#define AEGRIDENVIRONMENT_H


#import <Foundation/Foundation.h>


@interface AEGridEnvironment : NSObject

@property (nonatomic) CGFloat compactExtensionHeight; // ivar: _compactExtensionHeight
@property (nonatomic) CGFloat headerHeight; // ivar: _headerHeight
@property (nonatomic) CGFloat minimumTileHeight; // ivar: _minimumTileHeight
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) CGFloat targetBottomMargin; // ivar: _targetBottomMargin


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;


@end


#endif