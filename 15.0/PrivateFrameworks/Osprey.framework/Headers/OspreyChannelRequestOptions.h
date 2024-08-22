// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSPREYCHANNELREQUESTOPTIONS_H
#define OSPREYCHANNELREQUESTOPTIONS_H


#import <Foundation/Foundation.h>


@interface OspreyChannelRequestOptions : NSObject

@property (nonatomic, getter=isCompressionEnabled) BOOL compressionEnabled; // ivar: _compressionEnabled
@property (nonatomic) BOOL forceHTTPv2; // ivar: _forceHTTPv2


-(id)init;
-(void)applyToOspreyMutableRequest:(id)arg0 ;


@end


#endif