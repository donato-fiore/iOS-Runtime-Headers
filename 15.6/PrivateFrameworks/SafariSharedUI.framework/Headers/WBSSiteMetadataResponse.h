// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSSITEMETADATARESPONSE_H
#define WBSSITEMETADATARESPONSE_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface WBSSiteMetadataResponse : NSObject

@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(id)responseWithURL:(id)arg0 ;
-(id)init;
-(id)initWithURL:(id)arg0 ;


@end


#endif