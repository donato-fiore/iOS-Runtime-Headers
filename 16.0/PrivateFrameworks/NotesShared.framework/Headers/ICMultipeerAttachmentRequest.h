// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICMULTIPEERATTACHMENTREQUEST_H
#define ICMULTIPEERATTACHMENTREQUEST_H



#import "ICMultipeerResourceRequest.h"
#import "ICAttachment.h"

@interface ICMultipeerAttachmentRequest : ICMultipeerResourceRequest

@property (retain) ICAttachment *attachment; // ivar: _attachment


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)note;
-(void)startRequest;


@end


#endif