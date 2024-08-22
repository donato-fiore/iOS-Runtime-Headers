// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADISPLAYPROPERTIES_H
#define CADISPLAYPROPERTIES_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CADisplayMode.h"

@interface CADisplayProperties : NSObject {
    unsigned int _mask;
    CADisplayMode *_currentMode;
    NSString *_overscanAdjustment;
    BOOL _dmrrEnabled;
    unsigned int _connectionSeed;
    CGSize _logicalScale;
    unsigned int _pointScale;
}


@property (nonatomic) unsigned int connectionSeed;
@property (retain, nonatomic) CADisplayMode *currentMode;
@property (nonatomic) BOOL dmrrEnabled;
@property (nonatomic) CGSize logicalScale;
@property (copy, nonatomic) NSString *overscanAdjustment;
@property (nonatomic) NSUInteger pointScale;
@property (nonatomic) unsigned int updateMask;


-(BOOL)needsUpdateForField:(unsigned int)arg0 ;
-(id)init;
-(void)clearUpdateMask;
-(void)dealloc;


@end


#endif