// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POSOAPENVELOPE_H
#define POSOAPENVELOPE_H

@class NSArray, NSString;
@protocol POXSDefinitionProvider;

#import <Foundation/Foundation.h>


@interface POSOAPEnvelope : NSObject <POXSDefinitionProvider>



@property (copy, nonatomic) NSArray *Body; // ivar: _Body
@property (copy, nonatomic) NSArray *Header; // ivar: _Header
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)definition;


@end


#endif