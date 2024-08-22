// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AFSPEAKABLEUTTERANCEPASSTHROUGHPROVIDER_H
#define _AFSPEAKABLEUTTERANCEPASSTHROUGHPROVIDER_H

@class NSString;
@protocol AFSpeakableNamespaceProvider;

#import <Foundation/Foundation.h>


@interface _AFSpeakableUtterancePassThroughProvider : NSObject <AFSpeakableNamespaceProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)stringForExpression:(id)arg0 ;
-(id)stringForExpression:(id)arg0 containsPrivacySensitiveContents:(*BOOL)arg1 ;


@end


#endif