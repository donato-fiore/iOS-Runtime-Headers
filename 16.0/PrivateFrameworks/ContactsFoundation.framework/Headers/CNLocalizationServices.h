// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNLOCALIZATIONSERVICES_H
#define CNLOCALIZATIONSERVICES_H

@class NSString;
@protocol CNLocalizationServices;

#import <Foundation/Foundation.h>


@interface CNLocalizationServices : NSObject <CNLocalizationServices>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultServices;
-(id)localizedStringForKey:(id)arg0 value:(id)arg1 table:(id)arg2 bundleForClass:(Class)arg3 comment:(id)arg4 ;


@end


#endif