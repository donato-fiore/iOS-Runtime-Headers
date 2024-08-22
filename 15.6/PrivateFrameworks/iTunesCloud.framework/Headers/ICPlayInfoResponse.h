// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICPLAYINFORESPONSE_H
#define ICPLAYINFORESPONSE_H

@class NSDictionary, NSData;

#import <Foundation/Foundation.h>


@interface ICPlayInfoResponse : NSObject {
    NSDictionary *_responseDictionary;
}


@property (readonly, nonatomic) NSData *playInfoData;


-(id)initWithResponseDictionary:(id)arg0 ;


@end


#endif