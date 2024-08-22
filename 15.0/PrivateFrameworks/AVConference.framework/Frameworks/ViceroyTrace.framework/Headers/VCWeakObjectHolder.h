// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCWEAKOBJECTHOLDER_H
#define VCWEAKOBJECTHOLDER_H


#import <Foundation/Foundation.h>


@interface VCWeakObjectHolder : NSObject {
    id *_weakObject;
    *OpaqueFigCFWeakReference _weakObjectWithoutAutoRelease;
}


@property (readonly, nonatomic) id *strong;
@property (readonly, nonatomic) **OpaqueFigCFWeakReference weak;


+(id)weakObjectHolderWithObject:(id)arg0 ;
-(id)init;
-(id)initWithObject:(id)arg0 ;
-(void)dealloc;


@end


#endif