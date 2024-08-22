// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSSITEMETADATAREQUEST_H
#define WBSSITEMETADATAREQUEST_H

@class NSDictionary, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WBSSiteMetadataRequest : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *extraInfo; // ivar: _extraInfo
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithURL:(id)arg0 extraInfo:(id)arg1 ;


@end


#endif