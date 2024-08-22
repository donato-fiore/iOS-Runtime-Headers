// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LSLAZYPROPERTYLIST_H
#define _LSLAZYPROPERTYLIST_H

@protocol NSCopying, NSSecureCoding, LSDetachable;


#import "LSPropertyList.h"

@interface _LSLazyPropertyList : LSPropertyList <NSCopying, NSSecureCoding, LSDetachable>





+(BOOL)supportsSecureCoding;
+(id)lazyPropertyListWithContext:(struct LSContext *)arg0 unit:(unsigned int)arg1 ;
-(BOOL)_getPropertyList:(*id)arg0 ;
-(BOOL)_getValue:(*id)arg0 forPropertyListKey:(id)arg1 ;
-(id)_expensiveDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)objectForKey:(id)arg0 ofClass:(Class)arg1 ;
-(id)objectForKey:(id)arg0 ofClass:(Class)arg1 valuesOfClass:(Class)arg2 ;
-(id)objectsForKeys:(id)arg0 ;
-(id)uncheckedObjectsForKeys:(id)arg0 ;
-(void)detach;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prewarm;


@end


#endif