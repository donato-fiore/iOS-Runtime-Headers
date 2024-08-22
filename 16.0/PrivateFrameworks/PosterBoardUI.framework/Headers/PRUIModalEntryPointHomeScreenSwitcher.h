// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRUIMODALENTRYPOINTHOMESCREENSWITCHER_H
#define PRUIMODALENTRYPOINTHOMESCREENSWITCHER_H

@class NSString;
@protocol PRUIModalEntryPoint;

#import <Foundation/Foundation.h>


@interface PRUIModalEntryPointHomeScreenSwitcher : NSObject <PRUIModalEntryPoint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif