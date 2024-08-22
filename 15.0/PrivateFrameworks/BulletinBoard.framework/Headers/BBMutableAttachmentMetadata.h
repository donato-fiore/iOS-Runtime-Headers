// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BBMUTABLEATTACHMENTMETADATA_H
#define BBMUTABLEATTACHMENTMETADATA_H

@class NSURL, NSString, NSDictionary;


#import "BBAttachmentMetadata.h"

@interface BBMutableAttachmentMetadata : BBAttachmentMetadata

@property (copy, nonatomic) NSURL *URL;
@property (nonatomic) BOOL hiddenFromDefaultExpandedView;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *thumbnailGeneratorUserInfo;
@property (nonatomic) BOOL thumbnailHidden;
@property (nonatomic) NSInteger type;
@property (copy, nonatomic) NSString *uniformType;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif