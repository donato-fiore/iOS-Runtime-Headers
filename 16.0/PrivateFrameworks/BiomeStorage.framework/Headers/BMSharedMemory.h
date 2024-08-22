// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSHAREDMEMORY_H
#define BMSHAREDMEMORY_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BMFileAttributes.h"

@interface BMSharedMemory : NSObject <NSSecureCoding>

 {
    BOOL _mapped;
}


@property (readonly, nonatomic) *void address; // ivar: _address
@property (readonly, nonatomic) BMFileAttributes *attributes; // ivar: _attributes
@property (readonly, nonatomic) NSUInteger size; // ivar: _size


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRegion:(*void)arg0 size:(NSUInteger)arg1 attributes:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif