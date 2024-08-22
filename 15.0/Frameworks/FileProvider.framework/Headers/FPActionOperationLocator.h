// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPACTIONOPERATIONLOCATOR_H
#define FPACTIONOPERATIONLOCATOR_H

@class NSURL, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FPItem.h"

@interface FPActionOperationLocator : NSObject <NSCopying, NSSecureCoding>

 {
    NSObject *_object;
}


@property (readonly, nonatomic) FPItem *asFPItem;
@property (readonly, nonatomic) NSURL *asURL;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) id *identifier;
@property (readonly, nonatomic) BOOL isExternalURL;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, nonatomic) BOOL isProviderItem;
@property (readonly, nonatomic) id *parentIdentifier;
@property (readonly, nonatomic) BOOL requiresCrossDeviceCopy;
@property (readonly, nonatomic) NSUInteger size;
@property (readonly, nonatomic) id *underlyingObject;


+(BOOL)supportsSecureCoding;
+(id)locatorForItem:(id)arg0 ;
+(id)locatorForURL:(id)arg0 ;
-(BOOL)isDownloaded;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(void)_setObject:(id)arg0 ;
-(void)attachSandboxExtensionOnXPCEncoding;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif