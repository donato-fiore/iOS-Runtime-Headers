// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTFWRAPPEDSPEECHELEMENT_H
#define MTFWRAPPEDSPEECHELEMENT_H


#import <Foundation/Foundation.h>

#import "MTFWrappedSpeechElement.h"

@interface MTFWrappedSpeechElement : NSObject

@property (readonly, nonatomic) MTFWrappedSpeechElement *FirstChild;
@property (readonly, nonatomic) MTFWrappedSpeechElement *LastChild;
@property (readonly, nonatomic) MTFWrappedSpeechElement *NextSibling;
@property (readonly, nonatomic) int NumChildren; // ivar: _NumChildren
@property (readonly, nonatomic) MTFWrappedSpeechElement *Parent;
@property (readonly, nonatomic) MTFWrappedSpeechElement *PrevSibling;
@property BOOL unOwned; // ivar: _unOwned
@property *void wrapped; // ivar: _wrapped


+(id)fromCPPElement:(*void)arg0 ;
-(id)initWithCppElement:(*void)arg0 ;
-(struct MTFESpeechElement *)elem;
-(void)dealloc;


@end


#endif