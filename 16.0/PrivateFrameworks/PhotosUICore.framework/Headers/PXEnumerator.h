// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXENUMERATOR_H
#define PXENUMERATOR_H

@class NSString;
@protocol PXFastEnumeration;

#import <Foundation/Foundation.h>


@interface PXEnumerator : NSObject <PXFastEnumeration>

 {
    NSUInteger recursiveEnumerationValue;
}


@property (readonly) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) id *enumeratedObject; // ivar: _enumeratedObject
@property (readonly, nonatomic) id *firstObject;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)nextObject;
-(void)reset;


@end


#endif