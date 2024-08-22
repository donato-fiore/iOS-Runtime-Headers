// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSPREYCONNECTIONCONFIGURATION_H
#define OSPREYCONNECTIONCONFIGURATION_H

@class NSURL, NSURLSessionConfiguration;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface OspreyConnectionConfiguration : NSObject <NSCopying>



@property (retain, nonatomic) NSURL *connectionUrl; // ivar: _connectionUrl
@property (retain, nonatomic) NSURLSessionConfiguration *urlSessionConfiguration; // ivar: _urlSessionConfiguration


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif