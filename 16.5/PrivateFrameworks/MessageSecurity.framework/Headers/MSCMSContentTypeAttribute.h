// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSCMSCONTENTTYPEATTRIBUTE_H
#define MSCMSCONTENTTYPEATTRIBUTE_H

@protocol MSCMSAttributeCoder;

#import <Foundation/Foundation.h>

#import "MSOID.h"

@interface MSCMSContentTypeAttribute : NSObject <MSCMSAttributeCoder>



@property (readonly, retain) MSOID *attributeType;
@property (retain) MSOID *contentType; // ivar: _contentType


+(id)contentTypeAttributeWithOID:(id)arg0 ;
-(id)encodeAttributeWithError:(*id)arg0 ;
-(id)initWithAttribute:(id)arg0 error:(*id)arg1 ;
-(id)initWithOID:(id)arg0 ;


@end


#endif