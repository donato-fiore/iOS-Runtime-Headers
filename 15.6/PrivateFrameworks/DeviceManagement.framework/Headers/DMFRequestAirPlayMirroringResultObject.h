// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFREQUESTAIRPLAYMIRRORINGRESULTOBJECT_H
#define DMFREQUESTAIRPLAYMIRRORINGRESULTOBJECT_H

@class CATTaskResultObject;



@interface DMFRequestAirPlayMirroringResultObject : CATTaskResultObject

@property (readonly, nonatomic) NSUInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatus:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif