// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRPLAYBACKSESSIONREQUEST_H
#define MRPLAYBACKSESSIONREQUEST_H

@class NSData, NSString;

#import <Foundation/Foundation.h>

#import "_MRPlaybackSessionRequestProtobuf.h"

@interface MRPlaybackSessionRequest : NSObject

@property (readonly, copy, nonatomic) NSData *data;
@property (nonatomic) BOOL hasLength; // ivar: _hasLength
@property (nonatomic) BOOL hasLocation; // ivar: _hasLocation
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger length; // ivar: _length
@property (nonatomic) NSUInteger location; // ivar: _location
@property (readonly, nonatomic) _MRPlaybackSessionRequestProtobuf *protobuf;
@property (readonly, nonatomic) _NSRange range;
@property (copy, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (copy, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithData:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)initWithIdentifier:(id)arg0 type:(id)arg1 ;
-(id)initWithProtobuf:(id)arg0 ;


@end


#endif