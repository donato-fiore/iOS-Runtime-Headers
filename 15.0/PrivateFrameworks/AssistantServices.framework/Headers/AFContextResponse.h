// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFCONTEXTRESPONSE_H
#define AFCONTEXTRESPONSE_H



#import "AFSiriResponse.h"
#import "STSiriContext.h"

@interface AFContextResponse : AFSiriResponse {
    STSiriContext *_context;
}




+(BOOL)supportsSecureCoding;
-(id)_context;
-(id)_initWithRequest:(id)arg0 context:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif