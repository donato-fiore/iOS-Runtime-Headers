// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DVTDATABLOCKSTREAM_H
#define DVTDATABLOCKSTREAM_H

@class NSString;
@protocol DVTInputStream, DVTOutputStream;

#import <Foundation/Foundation.h>


@interface DVTDataBlockStream : NSObject <DVTInputStream, DVTOutputStream>

 {
    list<NSData *, std::allocator<NSData *>> _records;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsPeek;


-(BOOL)hasData;
-(BOOL)hasSpace;
-(NSInteger)write:(id)arg0 error:(*id)arg1 ;
-(id)createNextStream:(*id)arg0 ;
-(id)peek:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)read:(NSUInteger)arg0 error:(*id)arg1 ;


@end


#endif