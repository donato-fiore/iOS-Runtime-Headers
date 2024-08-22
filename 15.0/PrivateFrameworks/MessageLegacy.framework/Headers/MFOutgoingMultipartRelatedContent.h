// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFOUTGOINGMULTIPARTRELATEDCONTENT_H
#define MFOUTGOINGMULTIPARTRELATEDCONTENT_H

@class NSString;


#import "MFOutgoingRichtextMessageContent.h"

@interface MFOutgoingMultipartRelatedContent : MFOutgoingRichtextMessageContent

@property (retain, nonatomic) NSString *htmlBody; // ivar: _htmlBody


-(id)copy;
-(id)multipartContent;
-(void)dealloc;


@end


#endif