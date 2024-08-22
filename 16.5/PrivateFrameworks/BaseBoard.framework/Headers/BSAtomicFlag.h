// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSATOMICFLAG_H
#define BSATOMICFLAG_H


#import <Foundation/Foundation.h>


@interface BSAtomicFlag : NSObject {
    uint8_t _flag;
}




-(BOOL)getFlag;
-(BOOL)setFlag:(BOOL)arg0 ;
-(id)description;
-(id)init;
-(id)initWithFlag:(BOOL)arg0 ;


@end


#endif