// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMPROVIDERSTORE_H
#define RMPROVIDERSTORE_H

@class NSString;
@protocol NSSecureCoding, RMMutableStoreProtocol;


#import "RMBaseStore.h"

@interface RMProviderStore : RMBaseStore <NSSecureCoding, RMMutableStoreProtocol>



@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) BOOL dataSeparated;
@property (readonly, nonatomic) BOOL defaultToInteractive;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *personaIdentifier;
@property (readonly, copy, nonatomic) NSString *storeDescription;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
+(void)createStoreWithType:(NSInteger)arg0 defaultToInteractive:(BOOL)arg1 dataSeparated:(BOOL)arg2 options:(id)arg3 completionHandler:(id)arg4 ;
+(void)removeStoreWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
+(void)storeWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
+(void)storesWithCompletionHandler:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStore:(id)arg0 ;
-(void)applyChangesWithCompletionHandler:(id)arg0 ;
-(void)deleteDeclarationWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveDeclaration:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif