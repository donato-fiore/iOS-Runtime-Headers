// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCBITRATERULE_H
#define VCBITRATERULE_H


#import <Foundation/Foundation.h>

#import "VCVideoRule.h"

@interface VCBitrateRule : NSObject

@property unsigned int bitrate; // ivar: _bitrate
@property int connectionType; // ivar: _connectionType
@property (readonly, nonatomic) VCVideoRule *limitingRule; // ivar: limitingRule


-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)initWithBitrate:(unsigned int)arg0 connectionType:(int)arg1 limitingRule:(id)arg2 ;
-(void)dealloc;


@end


#endif