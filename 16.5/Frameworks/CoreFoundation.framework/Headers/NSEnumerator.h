// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSENUMERATOR_H
#define NSENUMERATOR_H

@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface NSEnumerator : NSObject <NSFastEnumeration>





-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)allObjects;
-(id)nextObject;


@end


#endif