// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ILNETWORKRESPONSE_H
#define ILNETWORKRESPONSE_H

@class NSData, NSHTTPURLResponse;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ILNetworkResponse : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *data; // ivar: _data
@property (copy, nonatomic) NSHTTPURLResponse *urlResponse; // ivar: _urlResponse


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURLResponse:(id)arg0 data:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif