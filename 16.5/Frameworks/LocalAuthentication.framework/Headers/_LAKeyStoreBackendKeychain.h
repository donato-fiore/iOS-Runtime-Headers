// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LAKEYSTOREBACKENDKEYCHAIN_H
#define _LAKEYSTOREBACKENDKEYCHAIN_H

@class NSString;
@protocol LAKeyStoreBackend;

#import <Foundation/Foundation.h>


@interface _LAKeyStoreBackendKeychain : NSObject <LAKeyStoreBackend>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)createGenericPasswordWithQuery:(id)arg0 error:(*id)arg1 ;
-(BOOL)createKeyWithQuery:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeItemsWithQuery:(id)arg0 error:(*id)arg1 ;
-(id)fetchItemWithQuery:(id)arg0 error:(*id)arg1 ;
-(id)fetchItemsWithQuery:(id)arg0 error:(*id)arg1 ;


@end


#endif