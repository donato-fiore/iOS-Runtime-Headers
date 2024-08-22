// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LSPLUGINPROPERTYLIST_H
#define _LSPLUGINPROPERTYLIST_H

@class LSLazyPropertyList, NSDictionary;


#import "_LSLazyPropertyList.h"

@interface _LSPlugInPropertyList : LSLazyPropertyList {
    _LSLazyPropertyList *_infoPlist;
    _LSLazyPropertyList *_sdkPlist;
    NSDictionary *_mergedPlist;
    os_unfair_lock_s _mergeLock;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_getPropertyList:(*id)arg0 ;
-(BOOL)_getValue:(*id)arg0 forPropertyListKey:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInfoPlist:(id)arg0 SDKPlist:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif