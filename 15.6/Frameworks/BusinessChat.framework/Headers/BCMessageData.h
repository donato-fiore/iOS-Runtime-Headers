// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCMESSAGEDATA_H
#define BCMESSAGEDATA_H

@class NSURL, NSData, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface BCMessageData : NSObject {
    NSURL *_url;
    NSData *_data;
    NSDictionary *_jsonDictionary;
    NSDictionary *_replyMessageDictionary;
    NSDictionary *_receivedMessageDictionary;
}


@property (readonly, nonatomic) NSDictionary *combinedDictionary;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSArray *imagesArray;
@property (readonly, nonatomic) NSDictionary *jsonDictionary;
@property (readonly, nonatomic) NSDictionary *receivedMessageDictionary;
@property (readonly, nonatomic) NSDictionary *replyMessageDictionary;
@property (readonly, nonatomic) NSURL *url;


-(id)initWithUrl:(id)arg0 data:(id)arg1 ;


@end


#endif