// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFOBJECTCREATEDSIRIRESPONSE_H
#define AFOBJECTCREATEDSIRIRESPONSE_H

@class NSURL;


#import "AFSiriResponse.h"

@interface AFObjectCreatedSiriResponse : AFSiriResponse {
    NSURL *_objectIdentifier;
}




+(BOOL)supportsSecureCoding;
-(id)_initWithRequest:(id)arg0 objectIdentifier:(id)arg1 ;
-(id)_objectIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif