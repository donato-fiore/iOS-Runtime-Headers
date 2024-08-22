// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSCLIPENTRYPOINTRECORD_H
#define CPSCLIPENTRYPOINTRECORD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CPSClipEntryPointRecord : NSObject

@property (copy, nonatomic) NSString *appClipBundleID; // ivar: _appClipBundleID
@property (nonatomic) CGFloat lastABRFetchTime; // ivar: _lastABRFetchTime
@property (copy, nonatomic) NSString *webClipIdentifier; // ivar: _webClipIdentifier


-(id)initWithSQLiteRow:(id)arg0 ;


@end


#endif