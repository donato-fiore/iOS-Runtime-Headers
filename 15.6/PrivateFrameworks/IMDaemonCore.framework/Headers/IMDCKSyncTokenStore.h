// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDCKSYNCTOKENSTORE_H
#define IMDCKSYNCTOKENSTORE_H

@class NSString;
@protocol IMDCKSyncTokenStore;

#import <Foundation/Foundation.h>


@interface IMDCKSyncTokenStore : NSObject <IMDCKSyncTokenStore>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)tokenForKey:(id)arg0 ;
+(void)migrateKey:(id)arg0 fromDatabase:(id)arg1 ;
+(void)persistToken:(id)arg0 forKey:(id)arg1 ;
-(id)tokenForKey:(id)arg0 ;
-(void)migrateKey:(id)arg0 fromDatabase:(id)arg1 ;
-(void)persistToken:(id)arg0 forKey:(id)arg1 ;


@end


#endif