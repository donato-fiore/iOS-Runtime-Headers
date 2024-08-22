// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OITSUCFSETENUMERATOR_H
#define OITSUCFSETENUMERATOR_H

@class NSEnumerator;
@protocol NSFastEnumeration;



@interface OITSUCFSetEnumerator : NSEnumerator <NSFastEnumeration>

 {
    *void mInlineObjects;
    **void mObjects;
    NSInteger mCount;
    NSInteger mIndex;
}




-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)allObjects;
-(id)initWithCFSet:(struct __CFSet *)arg0 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif