// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKFETCHSCREENSHOTRESULTOBJECT_H
#define CRKFETCHSCREENSHOTRESULTOBJECT_H

@class CATTaskResultObject, NSData, NSString;



@interface CRKFetchScreenshotResultObject : CATTaskResultObject

@property (copy, nonatomic) NSData *screenshotData; // ivar: _screenshotData
@property (copy, nonatomic) NSString *studentIdentifier; // ivar: _studentIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif