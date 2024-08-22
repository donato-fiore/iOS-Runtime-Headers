// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADTABSTOP_H
#define OADTABSTOP_H


#import <Foundation/Foundation.h>


@interface OADTabStop : NSObject {
    unsigned char mAlign;
    int mPosition;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(int)position;
-(unsigned char)align;
-(void)setAlign:(unsigned char)arg0 ;
-(void)setPosition:(int)arg0 ;


@end


#endif