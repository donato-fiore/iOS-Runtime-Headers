// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PASLPWRITERV1_H
#define _PASLPWRITERV1_H


#import <Foundation/Foundation.h>


@interface _PASLPWriterV1 : NSObject



+(id)dataWithPropertyList:(id)arg0 error:(*id)arg1 ;
+(id)fileBackedDataWithPropertyList:(id)arg0 appendedToFd:(int)arg1 startOfs:(*NSInteger)arg2 error:(*id)arg3 ;
+(id)fileBackedDataWithPropertyList:(id)arg0 writtenToPath:(id)arg1 error:(*id)arg2 ;
-(id)init;


@end


#endif