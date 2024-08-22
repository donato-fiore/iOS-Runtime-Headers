// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASLPREADERV1_H
#define _PASLPREADERV1_H

@class NSData;
@protocol _PASLPReaderProtocol;

#import <Foundation/Foundation.h>


@interface _PASLPReaderV1 : NSObject <_PASLPReaderProtocol>

 {
    NSData *_backingData;
    ? _mappedRegion;
    *__CFAllocator _releaseReaderDeallocator;
}




-(id)init;
-(id)initWithData:(id)arg0 sourcedFromPath:(id)arg1 error:(*id)arg2 ;
-(id)keyAtIndex:(NSUInteger)arg0 usingDictionaryContext:(id)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 usingArrayContext:(id)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 usingDictionaryContext:(id)arg1 ;
-(id)objectForKey:(id)arg0 usingDictionaryContext:(id)arg1 ;
-(id)rootObjectWithErrMsg:(*id)arg0 ;
-(void)dealloc;


@end


#endif