// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLIMAGEDATAINFO_H
#define PLIMAGEDATAINFO_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface PLImageDataInfo : NSObject

@property NSInteger EXIFOrientation; // ivar: _EXIFOrientation
@property (retain) NSURL *URL; // ivar: _URL
@property (retain) NSString *UTI; // ivar: _UTI
@property BOOL canDownloadFromCloud; // ivar: _canDownloadFromCloud
@property NSInteger deliveredFormat; // ivar: _deliveredFormat
@property BOOL deliveredPlaceholder; // ivar: _deliveredPlaceholder
@property (retain) NSString *sandboxExtensionToken; // ivar: _sandboxExtensionToken


-(id)description;


@end


#endif