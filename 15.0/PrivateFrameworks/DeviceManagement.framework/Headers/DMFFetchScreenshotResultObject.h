// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFFETCHSCREENSHOTRESULTOBJECT_H
#define DMFFETCHSCREENSHOTRESULTOBJECT_H

@class CATTaskResultObject, NSData;



@interface DMFFetchScreenshotResultObject : CATTaskResultObject

@property (readonly, nonatomic) NSData *screenshotData; // ivar: _screenshotData


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif