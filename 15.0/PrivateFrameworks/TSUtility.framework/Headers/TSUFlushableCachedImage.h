// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUFLUSHABLECACHEDIMAGE_H
#define TSUFLUSHABLECACHEDIMAGE_H



#import "TSUFlushableObject.h"

@interface TSUFlushableCachedImage : TSUFlushableObject {
    *CGImage _image;
    id *_delegate;
    SEL _delegateCreateImageSelector;
}




-(BOOL)hasFlushableContent;
-(id)initWithDelegate:(id)arg0 createImageSelector:(SEL)arg1 ;
-(struct CGImage *)newImage;
-(void)dealloc;
-(void)unload;


@end


#endif