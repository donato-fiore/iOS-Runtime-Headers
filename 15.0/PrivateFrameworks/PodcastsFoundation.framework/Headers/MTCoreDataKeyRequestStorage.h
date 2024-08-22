// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTCOREDATAKEYREQUESTSTORAGE_H
#define MTCOREDATAKEYREQUESTSTORAGE_H

@protocol MTSecureKeyRequestStorage;

#import <Foundation/Foundation.h>


@interface MTCoreDataKeyRequestStorage : NSObject <MTSecureKeyRequestStorage>





-(BOOL)keyExistsInStorageFor:(NSInteger)arg0 ;
-(BOOL)saveKeyDataFor:(id)arg0 ;
-(id)init;
-(id)retrieveKeyDataFor:(id)arg0 ;
-(void)markOfflineKeyFor:(NSInteger)arg0 pendingDeletion:(BOOL)arg1 ;
-(void)removeKeyDataFor:(id)arg0 ;


@end


#endif