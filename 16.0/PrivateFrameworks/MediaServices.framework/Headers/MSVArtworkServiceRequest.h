// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSVARTWORKSERVICEREQUEST_H
#define MSVARTWORKSERVICEREQUEST_H

@class NSMutableDictionary, NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSVArtworkServiceRequest : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_sandboxExtensions;
    NSMutableArray *_sandboxHandles;
}


@property (readonly, nonatomic) Class operationClass;
@property (readonly, nonatomic) NSInteger operationPriority;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addSandboxExtensionIfNeededForURL:(id)arg0 ;
-(void)consumeSandboxExtensions;
-(void)encodeWithCoder:(id)arg0 ;
-(void)releaseSandboxExtensions;


@end


#endif