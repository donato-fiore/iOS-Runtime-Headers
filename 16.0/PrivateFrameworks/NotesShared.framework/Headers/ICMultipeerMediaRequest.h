// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMULTIPEERMEDIAREQUEST_H
#define ICMULTIPEERMEDIAREQUEST_H



#import "ICMultipeerResourceRequest.h"
#import "ICMedia.h"

@interface ICMultipeerMediaRequest : ICMultipeerResourceRequest

@property (retain) ICMedia *media; // ivar: _media


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)note;
-(void)startRequest;


@end


#endif