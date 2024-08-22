// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXBOOKMARKACTIONSERIALIZER_H
#define SXBOOKMARKACTIONSERIALIZER_H

@class NSString;
@protocol SXActionSerializer;

#import <Foundation/Foundation.h>


@interface SXBookmarkActionSerializer : NSObject <SXActionSerializer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)URLForAction:(id)arg0 type:(NSInteger)arg1 ;


@end


#endif