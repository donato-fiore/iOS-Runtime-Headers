// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCSANDBOXEXTENSION_H
#define DCSANDBOXEXTENSION_H

@class NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DCSandboxExtension : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL canAccessFileURL; // ivar: _canAccessFileURL
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (nonatomic) NSInteger sandboxExtensionHandle; // ivar: _sandboxExtensionHandle
@property (readonly, nonatomic) BOOL shouldIssueSandboxExtensionWhenEncoding; // ivar: _shouldIssueSandboxExtensionWhenEncoding


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)relinquish;


@end


#endif