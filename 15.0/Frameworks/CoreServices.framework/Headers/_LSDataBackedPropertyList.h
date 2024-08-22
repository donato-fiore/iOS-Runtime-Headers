// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSDATABACKEDPROPERTYLIST_H
#define _LSDATABACKEDPROPERTYLIST_H

@class LSLazyPropertyList, NSData;


#import "_LSPlistHint.h"

@interface _LSDataBackedPropertyList : LSLazyPropertyList {
    NSData *_plistData;
    _LSPlistHint *_plistHint;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_getPropertyList:(*id)arg0 ;
-(BOOL)_getValue:(*id)arg0 forPropertyListKey:(id)arg1 ;
-(id)_plistHint;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPropertyListData:(id)arg0 ;
-(id)uncheckedObjectsForKeys:(id)arg0 ;
-(void)detach;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prewarm;


@end


#endif