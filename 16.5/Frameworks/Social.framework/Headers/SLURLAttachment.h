// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLURLATTACHMENT_H
#define SLURLATTACHMENT_H



#import "SLAttachment.h"

@interface SLURLAttachment : SLAttachment {
    NSInteger _urlType;
}




-(NSInteger)urlType;
-(id)initWithURL:(id)arg0 ofType:(NSInteger)arg1 preview:(id)arg2 ;
-(id)initWithURL:(id)arg0 previewImage:(id)arg1 ;


@end


#endif