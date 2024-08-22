// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSFILEPROVIDINGINFO_H
#define NSFILEPROVIDINGINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSFileProviderKernelMaterializationInfo.h"
#import "NSString.h"

@interface NSFileProvidingInfo : NSObject <NSSecureCoding>

 {
    NSUInteger recursiveGenerationCount;
}


@property (readonly) NSFileProviderKernelMaterializationInfo *kernelMaterializationInfo; // ivar: kernelMaterializationInfo
@property (readonly) ? readerAuditToken; // ivar: readerAuditToken
@property (readonly, copy) NSString *readerID; // ivar: readerID
@property (readonly) NSUInteger readingOptions; // ivar: readingOptions


+(BOOL)supportsSecureCoding;
+(id)infoWithReaderID:(id)arg0 options:(NSUInteger)arg1 auditToken:(struct ? )arg2 kernelMaterializationInfo:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setProvidedItemRecursiveGenerationCount:(NSUInteger)arg0 ;


@end


#endif