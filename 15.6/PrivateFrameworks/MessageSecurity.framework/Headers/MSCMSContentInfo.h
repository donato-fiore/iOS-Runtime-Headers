// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSCMSCONTENTINFO_H
#define MSCMSCONTENTINFO_H

@class NSData, NSString;
@protocol MSMessage, MSCMSMessage;

#import <Foundation/Foundation.h>

#import "MSOID.h"

@interface MSCMSContentInfo : NSObject <MSMessage>



@property (retain) NSData *content; // ivar: _content
@property (retain) MSOID *contentType; // ivar: _contentType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSObject<MSCMSMessage> *embeddedContent; // ivar: _embeddedContent
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)decodeMessageSecurityObject:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)encodeMessageSecurityObject:(*id)arg0 ;
-(id)initWithDataContent:(id)arg0 ;
-(id)initWithEmbeddedContent:(id)arg0 ;


@end


#endif