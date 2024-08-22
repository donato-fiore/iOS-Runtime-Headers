// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMPADDMEDIAENTITYTOWISHLIST_H
#define SAMPADDMEDIAENTITYTOWISHLIST_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAMPAddMediaEntityToWishList : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *adamId;


+(id)addMediaEntityToWishList;
+(id)addMediaEntityToWishListWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif