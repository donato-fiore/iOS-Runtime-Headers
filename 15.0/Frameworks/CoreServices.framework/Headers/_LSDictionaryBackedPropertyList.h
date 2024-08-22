// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSDICTIONARYBACKEDPROPERTYLIST_H
#define _LSDICTIONARYBACKEDPROPERTYLIST_H

@class LSLazyPropertyList, NSDictionary;



@interface _LSDictionaryBackedPropertyList : LSLazyPropertyList {
    NSDictionary *_plist;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_getPropertyList:(*id)arg0 ;
-(BOOL)_getValue:(*id)arg0 forPropertyListKey:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPropertyList:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif