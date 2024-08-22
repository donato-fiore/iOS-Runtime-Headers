// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTURECMSESSION_H
#define FIGCAPTURECMSESSION_H


#import <Foundation/Foundation.h>


@interface FigCaptureCMSession : NSObject

@property (readonly, retain, nonatomic) *opaqueCMSession cmsession; // ivar: _cmsession


-(id)copyProperty:(struct __CFString *)arg0 error:(*int)arg1 ;
-(id)initWithCMSession:(struct opaqueCMSession *)arg0 ;
-(int)setProperty:(struct __CFString *)arg0 value:(id)arg1 ;
-(void)dealloc;


@end


#endif