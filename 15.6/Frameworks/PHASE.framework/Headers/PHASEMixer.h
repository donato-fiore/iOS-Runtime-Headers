// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASEMIXER_H
#define PHASEMIXER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PHASEMetaParameter.h"

@interface PHASEMixer : NSObject

@property (readonly, nonatomic) CGFloat gain; // ivar: _gain
@property (readonly, nonatomic) PHASEMetaParameter *gainMetaParameter; // ivar: _gainMetaParameter
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *uid;


+(id)new;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithUID:(id)arg0 ;


@end


#endif