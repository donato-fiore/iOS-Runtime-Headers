// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUSUBTITLEVALUE_H
#define MRUSUBTITLEVALUE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MRUSubtitleValue : NSObject

@property (readonly, nonatomic) NSInteger accessory; // ivar: _accessory
@property (readonly, nonatomic) NSString *text; // ivar: _text


-(BOOL)isEqualToSubtitleValue:(id)arg0 ;
-(id)description;
-(id)initWithText:(id)arg0 accessory:(NSInteger)arg1 ;


@end


#endif