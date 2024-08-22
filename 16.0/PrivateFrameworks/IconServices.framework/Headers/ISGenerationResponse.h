// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISGENERATIONRESPONSE_H
#define ISGENERATIONRESPONSE_H

@class NSData, NSError, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ISGenerationResponse : NSObject <NSSecureCoding>



@property (readonly) NSData *data; // ivar: _data
@property (readonly) NSError *error; // ivar: _error
@property (readonly) NSUUID *uuid; // ivar: _uuid
@property (readonly) NSData *validationToken; // ivar: _validationToken


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 uuid:(id)arg1 validationToken:(id)arg2 ;
-(id)initWithError:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif