// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSFILEPROVIDERKERNELFILEMATERIALIZATIONINFO_H
#define NSFILEPROVIDERKERNELFILEMATERIALIZATIONINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSFileProviderKernelFileMaterializationInfo : NSObject <NSSecureCoding>



@property (readonly) NSInteger offset; // ivar: offset
@property (readonly) NSInteger size; // ivar: size


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSize:(NSInteger)arg0 offset:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif