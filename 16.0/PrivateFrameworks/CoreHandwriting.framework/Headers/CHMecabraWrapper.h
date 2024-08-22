// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHMECABRAWRAPPER_H
#define CHMECABRAWRAPPER_H


#import <Foundation/Foundation.h>


@interface CHMecabraWrapper : NSObject

@property (readonly) *__Mecabra mecabra; // ivar: _mecabra


-(id)init;
-(void)dealloc;
-(void)initMecabraIfNeededWithType:(int)arg0 learningDictURL:(id)arg1 ;


@end


#endif