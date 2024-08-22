// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PILONGEXPOSUREREGISTRATIONREQUEST_H
#define PILONGEXPOSUREREGISTRATIONREQUEST_H

@class NURenderRequest, NSDictionary;



@interface PILongExposureRegistrationRequest : NURenderRequest

@property (nonatomic) ? cleanAperture; // ivar: _cleanAperture
@property (copy, nonatomic) NSDictionary *recipe; // ivar: _recipe


-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)newRenderJob;
-(void)submit:(id)arg0 ;


@end


#endif