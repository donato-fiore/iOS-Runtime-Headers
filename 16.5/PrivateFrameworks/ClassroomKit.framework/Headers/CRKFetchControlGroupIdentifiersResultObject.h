// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKFETCHCONTROLGROUPIDENTIFIERSRESULTOBJECT_H
#define CRKFETCHCONTROLGROUPIDENTIFIERSRESULTOBJECT_H

@class CATTaskResultObject, NSArray;



@interface CRKFetchControlGroupIdentifiersResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *groupIdentifiers; // ivar: _groupIdentifiers


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGroupIdentifiers:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif