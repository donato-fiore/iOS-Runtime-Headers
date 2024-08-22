// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSSUBSCRIBEDSTREAM_H
#define MSSUBSCRIBEDSTREAM_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSSubscribedStream : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *ctag; // ivar: _ctag
@property (retain, nonatomic) NSString *streamID; // ivar: _streamID


+(BOOL)supportsSecureCoding;
+(id)subscribedStreamWithStreamID:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStreamID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif