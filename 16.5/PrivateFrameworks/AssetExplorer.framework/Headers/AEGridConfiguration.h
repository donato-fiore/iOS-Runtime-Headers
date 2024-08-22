// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AEGRIDCONFIGURATION_H
#define AEGRIDCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface AEGridConfiguration : NSObject

@property (nonatomic, getter=isOversized) BOOL oversized; // ivar: _oversized
@property (nonatomic) NSUInteger rowCount; // ivar: _rowCount
@property (nonatomic) CGFloat tileHeight; // ivar: _tileHeight


+(id)configurationForEnvironment:(id)arg0 ;


@end


#endif