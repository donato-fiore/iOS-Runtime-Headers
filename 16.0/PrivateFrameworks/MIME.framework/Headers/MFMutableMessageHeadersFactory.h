// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMUTABLEMESSAGEHEADERSFACTORY_H
#define MFMUTABLEMESSAGEHEADERSFACTORY_H

@class NSString;
@protocol ECMutableMessageHeadersFactory;

#import <Foundation/Foundation.h>


@interface MFMutableMessageHeadersFactory : NSObject <ECMutableMessageHeadersFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)mutableMessageHeaders;


@end


#endif