// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MXEXTENSIONLOOKUPPOLICY_H
#define _MXEXTENSIONLOOKUPPOLICY_H

@class NSString, NSPredicate;
@protocol _MXExtensionLookupPolicy;

#import <Foundation/Foundation.h>


@interface _MXExtensionLookupPolicy : NSObject <_MXExtensionLookupPolicy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSPredicate *extensionPredicate; // ivar: _extensionPredicate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPredicate:(id)arg0 ;


@end


#endif