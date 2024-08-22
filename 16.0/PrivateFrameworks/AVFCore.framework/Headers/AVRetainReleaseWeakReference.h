// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVRETAINRELEASEWEAKREFERENCE_H
#define AVRETAINRELEASEWEAKREFERENCE_H

@class NSString;


#import "AVWeakReference.h"

@interface AVRetainReleaseWeakReference : AVWeakReference {
    NSString *_cachedReferencedObjectDescription;
    id *_weakStorage;
}




-(id)description;
-(id)init;
-(id)initWithReferencedObject:(id)arg0 ;
-(id)referencedObject;
-(void)dealloc;


@end


#endif