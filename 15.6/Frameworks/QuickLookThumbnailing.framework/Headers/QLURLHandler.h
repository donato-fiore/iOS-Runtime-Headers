// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLURLHANDLER_H
#define QLURLHANDLER_H

@class NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface QLURLHandler : NSObject <NSSecureCoding>

 {
    char * _sandboxType;
    BOOL _isAccessingSecurityScope;
}


@property (nonatomic) NSInteger externalResourcesHandle; // ivar: _externalResourcesHandle
@property (copy, nonatomic) NSString *externalResourcesToken; // ivar: _externalResourcesToken
@property (nonatomic) NSInteger fileExtensionHandle; // ivar: _fileExtensionHandle
@property (retain, nonatomic) NSString *fileExtensionToken; // ivar: _fileExtensionToken
@property (retain) NSURL *fileURL; // ivar: _fileURL
@property (nonatomic) BOOL needsAccessToExternalResources; // ivar: _needsAccessToExternalResources
@property (nonatomic) NSInteger physicalFileExtensionHandle; // ivar: _physicalFileExtensionHandle
@property (retain, nonatomic) NSString *physicalFileExtensionToken; // ivar: _physicalFileExtensionToken


+(BOOL)supportsSecureCoding;
-(NSInteger)sandboxExtensionConsume:(char *)arg0 ;
-(char *)sandboxExtensionIssueFileWithClass:(char *)arg0 path:(char *)arg1 flags:(unsigned int)arg2 ;
-(id)_issueFileExtensionForURL:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 sandboxType:(char *)arg1 ;
-(void)_consumeFileExtension;
-(void)_issueExternalResourcesExtensionForURL:(id)arg0 ;
-(void)_issueFileExtension;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sandboxExtensionRelease:(NSInteger)arg0 ;


@end


#endif