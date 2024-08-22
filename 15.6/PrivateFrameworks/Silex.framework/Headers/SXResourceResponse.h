// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXRESOURCERESPONSE_H
#define SXRESOURCERESPONSE_H

@class NSError, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface SXResourceResponse : NSObject

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (retain, nonatomic) NSString *resourceIdentifier; // ivar: _resourceIdentifier




@end


#endif