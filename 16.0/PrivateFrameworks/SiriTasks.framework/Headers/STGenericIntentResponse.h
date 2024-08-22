// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STGENERICINTENTRESPONSE_H
#define STGENERICINTENTRESPONSE_H

@class AFSiriResponse;



@interface STGenericIntentResponse : AFSiriResponse

@property (nonatomic) NSInteger responseCode; // ivar: _responseCode


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif