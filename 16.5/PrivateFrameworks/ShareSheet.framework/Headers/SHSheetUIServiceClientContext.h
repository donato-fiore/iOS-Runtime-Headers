// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSHEETUISERVICECLIENTCONTEXT_H
#define SHSHEETUISERVICECLIENTCONTEXT_H

@class NSArray, NSString;
@protocol BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface SHSheetUIServiceClientContext : NSObject <BSXPCSecureCoding>



@property (copy, nonatomic) NSArray *activityConfigurations; // ivar: _activityConfigurations
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSharingExpanded; // ivar: _isSharingExpanded
@property (readonly, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithSessionIdentifier:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif