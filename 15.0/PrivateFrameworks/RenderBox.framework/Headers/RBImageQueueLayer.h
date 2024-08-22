// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBIMAGEQUEUELAYER_H
#define RBIMAGEQUEUELAYER_H

@class CALayer;



@interface RBImageQueueLayer : CALayer {
    cf_ptr<_CAImageQueue *> _queue;
}




+(id)defaultValueForKey:(id)arg0 ;
-(void)dealloc;


@end


#endif