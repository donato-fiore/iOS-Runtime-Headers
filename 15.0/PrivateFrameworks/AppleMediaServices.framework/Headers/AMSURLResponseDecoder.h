// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSURLRESPONSEDECODER_H
#define AMSURLRESPONSEDECODER_H

@class NSSet, NSIndexSet;
@protocol AMSResponseDecoding;

#import <Foundation/Foundation.h>


@interface AMSURLResponseDecoder : NSObject <AMSResponseDecoding>



@property (copy, nonatomic) NSSet *allowedContentTypes; // ivar: _allowedContentTypes
@property (copy, nonatomic) NSIndexSet *allowedStatusCodes; // ivar: _allowedStatusCodes


-(id)init;
-(id)resultFromResult:(id)arg0 error:(*id)arg1 ;


@end


#endif