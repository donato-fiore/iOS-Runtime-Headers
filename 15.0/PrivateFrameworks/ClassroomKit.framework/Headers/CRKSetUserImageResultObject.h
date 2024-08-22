// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKSETUSERIMAGERESULTOBJECT_H
#define CRKSETUSERIMAGERESULTOBJECT_H

@class CATTaskResultObject, NSString;



@interface CRKSetUserImageResultObject : CATTaskResultObject

@property (copy, nonatomic) NSString *imageIdentifier; // ivar: _imageIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif