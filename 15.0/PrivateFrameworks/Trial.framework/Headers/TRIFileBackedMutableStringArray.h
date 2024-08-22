// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIFILEBACKEDMUTABLESTRINGARRAY_H
#define TRIFILEBACKEDMUTABLESTRINGARRAY_H


#import <Foundation/Foundation.h>


@interface TRIFileBackedMutableStringArray : NSObject {
    int _fd;
}


@property (readonly, nonatomic) NSUInteger count; // ivar: _count


-(BOOL)addString:(id)arg0 ;
-(BOOL)enumerateStringsWithBlock:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif