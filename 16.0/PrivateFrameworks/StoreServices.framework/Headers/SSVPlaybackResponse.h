// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSVPLAYBACKRESPONSE_H
#define SSVPLAYBACKRESPONSE_H

@class NSHTTPURLResponse, NSURL, NSArray, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSVPlaybackResponse : NSObject <NSCopying>



@property (readonly, nonatomic) NSHTTPURLResponse *URLResponse; // ivar: _urlResponse
@property (copy, nonatomic) NSURL *fallbackStreamingKeyCertificateURL; // ivar: _fallbackStreamingKeyCertificateURL
@property (copy, nonatomic) NSURL *fallbackStreamingKeyServerURL; // ivar: _fallbackStreamingKeyServerURL
@property (readonly, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionary:(id)arg0 URLResponse:(id)arg1 ;
-(id)itemForItemIdentifier:(id)arg0 ;
-(void)_enumerateItemsUsingBlock:(id)arg0 ;


@end


#endif