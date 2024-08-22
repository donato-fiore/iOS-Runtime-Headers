// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTSSTRINGENUM_H
#define TTSSTRINGENUM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TTSStringEnum : NSObject

@property (nonatomic, readonly) NSInteger hash;
@property (readonly, nonatomic) NSString *string; // ivar: _string


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithString:(id)arg0 ;


@end


#endif