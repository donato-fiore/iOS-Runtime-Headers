// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCPLAYERAUDIOFORMATSELECTION_H
#define MPCPLAYERAUDIOFORMATSELECTION_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "MPCPlayerAudioFormat.h"

@interface MPCPlayerAudioFormatSelection : NSObject

@property (copy, nonatomic) NSString *explanation; // ivar: _explanation
@property (retain, nonatomic) MPCPlayerAudioFormat *format; // ivar: _format
@property (copy, nonatomic) NSDictionary *justification; // ivar: _justification


-(id)initWithExplanation:(id)arg0 justification:(id)arg1 ;
-(id)initWithFormat:(id)arg0 explanation:(id)arg1 justification:(id)arg2 ;


@end


#endif