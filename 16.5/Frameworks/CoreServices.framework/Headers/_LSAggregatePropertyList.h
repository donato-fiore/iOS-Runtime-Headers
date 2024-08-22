// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LSAGGREGATEPROPERTYLIST_H
#define _LSAGGREGATEPROPERTYLIST_H

@class LSLazyPropertyList, NSArray;



@interface _LSAggregatePropertyList : LSLazyPropertyList {
    NSArray *_plists;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_getPropertyList:(*id)arg0 ;
-(BOOL)_getValue:(*id)arg0 forPropertyListKey:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLazyPropertyLists:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prewarm;


@end


#endif