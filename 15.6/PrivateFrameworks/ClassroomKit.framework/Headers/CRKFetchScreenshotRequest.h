// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKFETCHSCREENSHOTREQUEST_H
#define CRKFETCHSCREENSHOTREQUEST_H

@class CATTaskRequest;



@interface CRKFetchScreenshotRequest : CATTaskRequest

@property (nonatomic) NSUInteger maxHeight; // ivar: _maxHeight
@property (nonatomic) NSUInteger maxWidth; // ivar: _maxWidth


+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif