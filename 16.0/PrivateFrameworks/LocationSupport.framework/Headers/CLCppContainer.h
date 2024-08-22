// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLCPPCONTAINER_H
#define CLCPPCONTAINER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLCppContainer : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger binaryVersion; // ivar: _binaryVersion
@property (nonatomic) *void cppObjectPtr; // ivar: _cppObjectPtr
@property (copy, nonatomic) id *destructor; // ivar: _destructor
@property (readonly, nonatomic) NSUInteger sizeOfType; // ivar: _sizeOfType


+(BOOL)supportsSecureCoding;
// +(id)containerWithObject:(*void)arg0 destructor:(id)arg1 binaryVersion:(unk)arg2 typeSize:(NSUInteger)arg3  ;
-(id)initWithCoder:(id)arg0 ;
// -(id)initWithObject:(*void)arg0 destructor:(id)arg1 binaryVersion:(unk)arg2 typeSize:(NSUInteger)arg3  ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;


@end


#endif