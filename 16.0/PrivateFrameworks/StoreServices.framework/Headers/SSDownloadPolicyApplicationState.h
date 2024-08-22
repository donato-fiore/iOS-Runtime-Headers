// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSDOWNLOADPOLICYAPPLICATIONSTATE_H
#define SSDOWNLOADPOLICYAPPLICATIONSTATE_H

@class NSString, NSSet;
@protocol NSSecureCoding, SSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SSDownloadPolicyApplicationState : NSObject <NSSecureCoding, SSXPCCoding, NSCopying>



@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (copy, nonatomic) NSSet *applicationStates; // ivar: _applicationStates
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithApplicationIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)addApplicationState:(NSInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setNotRunningApplicationStates;


@end


#endif