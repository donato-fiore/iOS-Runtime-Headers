// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSCMSCONTENTTYPEATTRIBUTE_H
#define MSCMSCONTENTTYPEATTRIBUTE_H

@protocol MSCMSAttributeCoder;

#import <Foundation/Foundation.h>

#import "MSOID.h"

@interface MSCMSContentTypeAttribute : NSObject <MSCMSAttributeCoder>



@property (retain) MSOID *contentType; // ivar: _contentType


+(id)contentTypeAttributeWithOID:(id)arg0 ;
-(id)encodeAttributeWithError:(*id)arg0 ;
-(id)initWithAttribute:(id)arg0 error:(*id)arg1 ;
-(id)initWithOID:(id)arg0 ;


@end


#endif