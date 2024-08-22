// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGWEAKREFERENCE_H
#define FIGWEAKREFERENCE_H


#import <Foundation/Foundation.h>


@interface FigWeakReference : NSObject {
    id *_referencedObject;
}


@property (readonly) id *referencedObject;


+(id)weakReferenceToObject:(id)arg0 ;
-(id)initWithReferencedObject:(id)arg0 ;
-(id)retainReferencedObject;
-(void)dealloc;


@end


#endif