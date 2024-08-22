// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSQUERYRESULTWITHPROPERTYLIST_H
#define _LSQUERYRESULTWITHPROPERTYLIST_H

@class LSQueryResult;



@interface _LSQueryResultWithPropertyList : LSQueryResult

@property (readonly, retain, nonatomic) id *propertyList; // ivar: _propertyList


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPropertyList:(id)arg0 ;
-(id)propertyListWithClass:(Class)arg0 ;
-(id)propertyListWithClass:(Class)arg0 valuesOfClass:(Class)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif