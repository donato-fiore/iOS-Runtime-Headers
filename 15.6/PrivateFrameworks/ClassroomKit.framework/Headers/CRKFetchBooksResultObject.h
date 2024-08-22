// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKFETCHBOOKSRESULTOBJECT_H
#define CRKFETCHBOOKSRESULTOBJECT_H

@class CATTaskResultObject, NSArray;



@interface CRKFetchBooksResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *books; // ivar: _books


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif