// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFFETCHMANAGEDBOOKSRESULTOBJECT_H
#define DMFFETCHMANAGEDBOOKSRESULTOBJECT_H

@class CATTaskResultObject, NSArray;



@interface DMFFetchManagedBooksResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *books; // ivar: _books


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithBooks:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif