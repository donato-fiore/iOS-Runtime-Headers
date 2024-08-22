// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POSOAPREASON_H
#define POSOAPREASON_H

@class NSString;
@protocol POXSDefinitionProvider;

#import <Foundation/Foundation.h>

#import "POSOAPText.h"

@interface POSOAPReason : NSObject <POXSDefinitionProvider>



@property (retain, nonatomic) POSOAPText *Text; // ivar: _Text
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)definition;


@end


#endif