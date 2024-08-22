// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKIDENTITYINTENTTOSTORE_H
#define PKIDENTITYINTENTTOSTORE_H

@class DIIdentityIntentToStore;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKIdentityIntentToStore : NSObject <NSCopying>



@property (retain) DIIdentityIntentToStore *wrapped; // ivar: _wrapped


+(id)mayStoreIntent;
+(id)mayStoreIntentForDays:(NSInteger)arg0 ;
+(id)willNotStoreIntent;
-(id)asDIIdentityIntentToStore;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDIIdentityIntentToStore:(id)arg0 ;


@end


#endif