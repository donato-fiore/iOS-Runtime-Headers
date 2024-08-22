// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPUNCHOUTOPTIONS_H
#define MKPUNCHOUTOPTIONS_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface MKPunchoutOptions : NSObject

@property (copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (nonatomic) NSInteger strategy; // ivar: _strategy
@property (copy, nonatomic) NSURL *urlToOpen; // ivar: _urlToOpen


+(id)punchoutOptionsForURLStrings:(id)arg0 withAttribution:(id)arg1 ;


@end


#endif