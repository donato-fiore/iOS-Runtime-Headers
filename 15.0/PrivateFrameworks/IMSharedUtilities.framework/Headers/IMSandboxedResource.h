// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMSANDBOXEDRESOURCE_H
#define IMSANDBOXEDRESOURCE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IMSandboxedResource : NSObject <NSSecureCoding>



@property (retain, nonatomic) id *resource; // ivar: _resource
@property (retain, nonatomic) NSString *sandboxExtension; // ivar: _sandboxExtension
@property (nonatomic) NSInteger sandboxExtensionHandle; // ivar: _sandboxExtensionHandle


+(BOOL)supportsSecureCoding;
-(BOOL)accessResourceByConsumingSandboxExtensionWithBlock:(id)arg0 ;
-(char *)_sandboxExtensionForPID:(int)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)authorizeForPID:(int)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif