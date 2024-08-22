// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUISERVERSUPPLIEDPROFILEPICTURECACHEENTRY_H
#define AAUISERVERSUPPLIEDPROFILEPICTURECACHEENTRY_H

@class NSDate, UIImage, NSString;

#import <Foundation/Foundation.h>


@interface AAUIServerSuppliedProfilePictureCacheEntry : NSObject {
    NSDate *_expirationDate;
}


@property (readonly, nonatomic) BOOL expired;
@property (retain, nonatomic) UIImage *picture; // ivar: _picture
@property (copy, nonatomic) NSString *serverCacheTag; // ivar: _serverCacheTag
@property (nonatomic) BOOL updating; // ivar: _updating


-(id)description;
-(void)expire;


@end


#endif