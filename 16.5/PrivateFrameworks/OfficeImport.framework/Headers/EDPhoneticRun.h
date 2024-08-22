// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDPHONETICRUN_H
#define EDPHONETICRUN_H


#import <Foundation/Foundation.h>


@interface EDPhoneticRun : NSObject {
    unsigned int mCharIndex;
    unsigned int mBaseCharIndex;
    unsigned int mBaseCharCount;
}




-(id)description;
-(id)init;
-(unsigned int)charBaseCount;
-(unsigned int)charBaseIndex;
-(unsigned int)charIndex;
-(void)adjustIndex:(NSUInteger)arg0 ;
-(void)setCharBaseCount:(unsigned int)arg0 ;
-(void)setCharBaseIndex:(unsigned int)arg0 ;
-(void)setCharIndex:(unsigned int)arg0 ;


@end


#endif