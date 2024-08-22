// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CSSTORE2DATACONTAINER_H
#define _CSSTORE2DATACONTAINER_H


#import <Foundation/Foundation.h>


@interface _CSStore2DataContainer : NSObject {
    *Data p;
    unsigned int pAllocatedLength;
}




+(id)new;
-(id)init;
-(id)initWithBytesNoCopy:(struct Data *)arg0 length:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif