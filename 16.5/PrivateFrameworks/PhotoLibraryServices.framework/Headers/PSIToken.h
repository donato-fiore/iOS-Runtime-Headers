// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSITOKEN_H
#define PSITOKEN_H


#import <Foundation/Foundation.h>


@interface PSIToken : NSObject

@property (nonatomic) ? range; // ivar: _range
@property (retain, nonatomic) *__CFString string; // ivar: _string


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithString:(struct __CFString *)arg0 range:(struct ? )arg1 ;
-(void)dealloc;


@end


#endif