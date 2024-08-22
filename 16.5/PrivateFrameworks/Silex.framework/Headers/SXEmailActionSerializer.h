// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXEMAILACTIONSERIALIZER_H
#define SXEMAILACTIONSERIALIZER_H

@class NSString;
@protocol SXActionSerializer;

#import <Foundation/Foundation.h>


@interface SXEmailActionSerializer : NSObject <SXActionSerializer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)URLForAction:(id)arg0 type:(NSInteger)arg1 ;


@end


#endif