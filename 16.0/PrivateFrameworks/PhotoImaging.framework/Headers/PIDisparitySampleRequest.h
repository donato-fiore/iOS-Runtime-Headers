// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIDISPARITYSAMPLEREQUEST_H
#define PIDISPARITYSAMPLEREQUEST_H

@class NURenderRequest;



@interface PIDisparitySampleRequest : NURenderRequest

@property (nonatomic) CGRect sampleRect; // ivar: _sampleRect
@property (nonatomic) ? sampleTime; // ivar: _sampleTime


-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 time:(struct ? )arg1 sampleRect:(struct CGRect )arg2 ;
-(id)newRenderJob;
-(void)submit:(id)arg0 ;


@end


#endif