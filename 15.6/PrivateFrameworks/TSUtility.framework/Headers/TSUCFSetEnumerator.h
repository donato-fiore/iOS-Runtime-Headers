// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUCFSETENUMERATOR_H
#define TSUCFSETENUMERATOR_H

@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface TSUCFSetEnumerator : NSObject <NSFastEnumeration>

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