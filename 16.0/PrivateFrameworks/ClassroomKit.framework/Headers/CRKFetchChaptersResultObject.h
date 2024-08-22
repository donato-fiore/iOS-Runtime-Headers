// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKFETCHCHAPTERSRESULTOBJECT_H
#define CRKFETCHCHAPTERSRESULTOBJECT_H

@class CATTaskResultObject, NSArray;



@interface CRKFetchChaptersResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *chapters; // ivar: _chapters


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif