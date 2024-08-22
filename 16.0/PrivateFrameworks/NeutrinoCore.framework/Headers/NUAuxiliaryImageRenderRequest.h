// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUAUXILIARYIMAGERENDERREQUEST_H
#define NUAUXILIARYIMAGERENDERREQUEST_H



#import "NURenderRequest.h"

@interface NUAuxiliaryImageRenderRequest : NURenderRequest

@property NSInteger auxiliaryImageType; // ivar: _auxiliaryImageType


-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)newRenderJob;
-(id)submitSynchronous:(*id)arg0 ;
-(void)submit:(id)arg0 ;


@end


#endif