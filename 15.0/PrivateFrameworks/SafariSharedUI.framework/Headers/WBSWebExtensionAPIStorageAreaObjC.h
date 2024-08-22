// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPISTORAGEAREAOBJC_H
#define WBSWEBEXTENSIONAPISTORAGEAREAOBJC_H



#import "WBSWebExtensionAPIObject.h"
#import "WBSWebExtensionAPIEventObjC.h"

@interface WBSWebExtensionAPIStorageAreaObjC : WBSWebExtensionAPIObject {
    NSInteger _storageType;
    WBSWebExtensionAPIEventObjC *_onChanged;
}


@property (readonly, nonatomic) *void cpp;
@property (readonly, nonatomic) CGFloat maxItems;
@property (readonly, nonatomic) CGFloat maxWriteOperationsPerHour;
@property (readonly, nonatomic) CGFloat maxWriteOperationsPerMinute;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onChanged;
@property (readonly, nonatomic) CGFloat quotaBytes;
@property (readonly, nonatomic) CGFloat quotaBytesPerItem;


+(id)storageAreaWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 isForMainWorld:(BOOL)arg2 storageType:(NSInteger)arg3 ;
-(BOOL)isPropertyAllowed:(id)arg0 ;
-(id)_decodeJSONStringRepresentations:(id)arg0 context:(struct OpaqueJSContext *)arg1 outErrorDescription:(*id)arg2 ;
-(id)_storageAreaAPINamePrefix;
-(void)_getValuesForAllKeysForBrowserContextController:(id)arg0 context:(struct OpaqueJSContext *)arg1 completionHandler:(id)arg2 ;
-(void)_getValuesForKeys:(id)arg0 browserContextController:(id)arg1 context:(struct OpaqueJSContext *)arg2 completionHandler:(id)arg3 ;
-(void)_getValuesForKeysWithDefaultValues:(id)arg0 browserContextController:(id)arg1 context:(struct OpaqueJSContext *)arg2 completionHandler:(id)arg3 outExceptionString:(*id)arg4 ;
-(void)_initWithExtensionIdentifier:(id)arg0 runtime:(id)arg1 isForMainWorld:(BOOL)arg2 storageType:(NSInteger)arg3 ;
-(void)clearWithBrowserContextController:(id)arg0 completionHandler:(id)arg1 ;
-(void)getBytesInUseForItems:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)getItems:(id)arg0 browserContextController:(id)arg1 context:(struct OpaqueJSContext *)arg2 completionHandler:(id)arg3 outExceptionString:(*id)arg4 ;
-(void)removeItems:(id)arg0 browserContextController:(id)arg1 completionHandler:(id)arg2 outExceptionString:(*id)arg3 ;
-(void)setItems:(id)arg0 browserContextController:(id)arg1 context:(struct OpaqueJSContext *)arg2 completionHandler:(id)arg3 outExceptionString:(*id)arg4 ;


@end


#endif