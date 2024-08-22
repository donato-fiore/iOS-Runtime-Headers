// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTIDCOMPOSITESECRETSTORE_H
#define MTIDCOMPOSITESECRETSTORE_H

@class NSString, NSMutableDictionary;
@protocol MTIDSecretStore;

#import <Foundation/Foundation.h>


@interface MTIDCompositeSecretStore : NSObject <MTIDSecretStore>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *stores; // ivar: _stores
@property (readonly) Class superclass;


-(id)debugInfo;
-(id)init;
-(id)maintainSchemes:(id)arg0 options:(id)arg1 ;
-(id)resetSchemes:(id)arg0 options:(id)arg1 ;
-(id)schemesGroupedByStore:(id)arg0 ;
-(id)secretForScheme:(id)arg0 options:(id)arg1 ;
-(id)secretStoreForScheme:(id)arg0 ;
-(id)storeKeyForScheme:(id)arg0 ;
-(void)clearLocalData;


@end


#endif