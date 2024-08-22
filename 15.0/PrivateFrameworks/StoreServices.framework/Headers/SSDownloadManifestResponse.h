// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSDOWNLOADMANIFESTRESPONSE_H
#define SSDOWNLOADMANIFESTRESPONSE_H

@class NSArray, NSString;
@protocol SSXPCCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SSDownloadManifestResponse : NSObject <SSXPCCoding, NSSecureCoding>

 {
    NSArray *_validDownloads;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy) NSArray *validDownloads;


+(BOOL)supportsSecureCoding;
-(id)copyXPCEncoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif