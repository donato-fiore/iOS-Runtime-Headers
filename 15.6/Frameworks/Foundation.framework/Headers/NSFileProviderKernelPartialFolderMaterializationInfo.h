// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSFILEPROVIDERKERNELPARTIALFOLDERMATERIALIZATIONINFO_H
#define NSFILEPROVIDERKERNELPARTIALFOLDERMATERIALIZATIONINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSFileProviderKernelPartialFolderMaterializationInfo : NSObject <NSSecureCoding>



@property (readonly) NSString *fileName; // ivar: fileName


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileName:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif