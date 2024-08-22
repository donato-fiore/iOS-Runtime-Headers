// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGCOMPONENTDATASTORE_H
#define PXGCOMPONENTDATASTORE_H


#import <Foundation/Foundation.h>


@interface PXGComponentDataStore : NSObject {
    char * _data;
}


@property (nonatomic) NSInteger capacity; // ivar: _capacity
@property (readonly, nonatomic) NSUInteger elementSize; // ivar: _elementSize


-(*void)contents;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)byteSize;
-(id)init;
-(id)initWithElementSize:(NSUInteger)arg0 ;
-(id)mutableCopy;
-(void)dealloc;


@end


#endif