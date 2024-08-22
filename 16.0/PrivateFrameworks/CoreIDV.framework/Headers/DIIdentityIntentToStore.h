// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIIDENTITYINTENTTOSTORE_H
#define DIIDENTITYINTENTTOSTORE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface DIIdentityIntentToStore : NSObject <NSCopying>



@property (readonly, retain) NSString *identifier; // ivar: _identifier


+(id)mayStoreIntent;
+(id)mayStoreIntentForDays:(NSInteger)arg0 ;
+(id)willNotStoreIntent;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif