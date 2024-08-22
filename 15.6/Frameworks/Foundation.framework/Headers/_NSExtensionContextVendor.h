// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSEXTENSIONCONTEXTVENDOR_H
#define _NSEXTENSIONCONTEXTVENDOR_H


#import <Foundation/Foundation.h>


@interface _NSExtensionContextVendor : NSObject



+(Class)_extensionContextClass;
+(Class)_extensionPrincipalClass;
+(id)_extensionDictionary;
+(id)_extensionMainStoryboard;
+(id)_sharedExtensionContextVendor;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(void)_startListening;
+(void)_startListening:(BOOL)arg0 ;
-(id)_extensionContextForUUID:(id)arg0 ;
-(id)_init;
-(id)init;
-(void)_setPrincipalObject:(id)arg0 forUUID:(id)arg1 ;
-(void)_tearDownContextWithUUID:(id)arg0 ;


@end


#endif