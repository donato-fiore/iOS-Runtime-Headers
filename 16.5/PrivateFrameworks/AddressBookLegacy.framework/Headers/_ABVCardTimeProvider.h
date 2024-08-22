// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ABVCARDTIMEPROVIDER_H
#define _ABVCARDTIMEPROVIDER_H

@class NSString;
@protocol ABVCardTimeProvider;

#import <Foundation/Foundation.h>


@interface _ABVCardTimeProvider : NSObject <ABVCardTimeProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)now;


@end


#endif