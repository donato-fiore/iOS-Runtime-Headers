// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LAKEYSTOREBACKENDFAKE_H
#define _LAKEYSTOREBACKENDFAKE_H

@class NSMutableDictionary, NSString;
@protocol LAKeyStoreBackend;

#import <Foundation/Foundation.h>


@interface _LAKeyStoreBackendFake : NSObject <LAKeyStoreBackend>

 {
    NSMutableDictionary *_keys;
    NSMutableDictionary *_genps;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)createGenericPasswordWithQuery:(id)arg0 error:(*id)arg1 ;
-(BOOL)createKeyWithQuery:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeItemsWithQuery:(id)arg0 error:(*id)arg1 ;
-(id)fetchItemWithQuery:(id)arg0 error:(*id)arg1 ;
-(id)fetchItemsWithQuery:(id)arg0 error:(*id)arg1 ;
-(id)init;


@end


#endif