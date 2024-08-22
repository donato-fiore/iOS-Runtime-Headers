// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICADDTOWISHLISTRESPONSE_H
#define ICADDTOWISHLISTRESPONSE_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface ICAddToWishListResponse : NSObject {
    NSDictionary *_responseDictionary;
}


@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSInteger statusCode;


-(id)description;
-(id)initWithResponseDictionary:(id)arg0 ;


@end


#endif