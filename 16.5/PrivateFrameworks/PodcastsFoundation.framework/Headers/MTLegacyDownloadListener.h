// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLEGACYDOWNLOADLISTENER_H
#define MTLEGACYDOWNLOADLISTENER_H

@protocol MTLegacyDownloadManagerDelegate;

#import <Foundation/Foundation.h>


@interface MTLegacyDownloadListener : NSObject

@property (readonly, weak, nonatomic) NSObject<MTLegacyDownloadManagerDelegate> *delegate; // ivar: _delegate


-(id)initWithDelegate:(id)arg0 ;


@end


#endif