// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDBATTACHMENTINFO_H
#define CDBATTACHMENTINFO_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface CDBAttachmentInfo : NSObject

@property (readonly, copy, nonatomic) NSURL *legacyURL; // ivar: _legacyURL
@property (readonly, copy, nonatomic) NSString *localRelativePath; // ivar: _localRelativePath
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url


-(id)initWithLegacyURL:(id)arg0 url:(id)arg1 localRelativePath:(id)arg2 ;


@end


#endif