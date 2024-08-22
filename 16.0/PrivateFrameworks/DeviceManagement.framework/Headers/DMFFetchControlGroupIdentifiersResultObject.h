// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFFETCHCONTROLGROUPIDENTIFIERSRESULTOBJECT_H
#define DMFFETCHCONTROLGROUPIDENTIFIERSRESULTOBJECT_H

@class CATTaskResultObject, NSArray;



@interface DMFFetchControlGroupIdentifiersResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *groupIdentifiers; // ivar: _groupIdentifiers


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGroupIdentifiers:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif