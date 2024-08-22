// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSEMPTYPROPERTYLIST_H
#define _LSEMPTYPROPERTYLIST_H

@class LSLazyPropertyList;



@interface _LSEmptyPropertyList : LSLazyPropertyList



+(BOOL)supportsSecureCoding;
+(id)sharedInstance;
-(BOOL)_getPropertyList:(*id)arg0 ;
-(BOOL)_getValue:(*id)arg0 forPropertyListKey:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)uncheckedObjectsForKeys:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif