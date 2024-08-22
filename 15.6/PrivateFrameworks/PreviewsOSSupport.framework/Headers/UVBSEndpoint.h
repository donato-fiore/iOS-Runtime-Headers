// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UVBSENDPOINT_H
#define UVBSENDPOINT_H

@class NSString, BSServiceConnectionEndpoint;
@protocol BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface UVBSEndpoint : NSObject <BSXPCSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *underlying; // ivar: _underlying


+(BOOL)supportsBSXPCSecureCoding;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithUnderlying:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif