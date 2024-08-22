// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIACTIVITYITEMURLREP_H
#define UIACTIVITYITEMURLREP_H

@class NSURL, UIImage;

#import <Foundation/Foundation.h>


@interface UIActivityItemURLRep : NSObject

@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic) NSInteger attachmentURLType; // ivar: _attachmentURLType
@property (retain, nonatomic) UIImage *thumbnail; // ivar: _thumbnail


-(id)scheme;


@end


#endif