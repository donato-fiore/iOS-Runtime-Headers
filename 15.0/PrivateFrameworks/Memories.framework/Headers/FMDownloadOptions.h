// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMDOWNLOADOPTIONS_H
#define FMDOWNLOADOPTIONS_H


#import <Foundation/Foundation.h>


@interface FMDownloadOptions : NSObject

@property (nonatomic) BOOL allowsCellular; // ivar: _allowsCellular
@property (nonatomic) NSUInteger downloadPriority; // ivar: _downloadPriority


-(id)description;
-(id)init;
-(void)_configureDefaults;


@end


#endif