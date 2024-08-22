// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSOCKET_H
#define CLSOCKET_H

@class NSString, NSURL, NSDictionary;

#import <Foundation/Foundation.h>


@interface CLSocket : NSObject

@property (copy, nonatomic) NSString *APIKey; // ivar: _APIKey
@property (nonatomic) NSInteger appID; // ivar: _appID
@property (retain, nonatomic) NSURL *authURL; // ivar: _authURL
@property (retain, nonatomic) NSDictionary *channels; // ivar: _channels


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif