// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXQUICKLOOKFILE_H
#define SXQUICKLOOKFILE_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface SXQuickLookFile : NSObject

@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) NSURL *shareURL; // ivar: _shareURL
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)initWithFileURL:(id)arg0 shareURL:(id)arg1 ;
-(id)initWithFileURL:(id)arg0 title:(id)arg1 shareURL:(id)arg2 ;
-(id)previewItemTitle;
-(id)previewItemURL;


@end


#endif