// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPUBLICSTREAMUTILITIES_H
#define BMPUBLICSTREAMUTILITIES_H


#import <Foundation/Foundation.h>


@interface BMPublicStreamUtilities : NSObject



+(BOOL)writeAllowedForStream:(NSInteger)arg0 processIdentifier:(id)arg1 ;
+(NSInteger)streamForStreamIdentifier:(id)arg0 ;
+(NSUInteger)domainForStream:(NSInteger)arg0 ;
+(id)allowedStreamWriteIdentifiersForStream:(NSInteger)arg0 ;
+(id)streamIdentifierForStream:(NSInteger)arg0 ;
+(id)streamIdentifiers;


@end


#endif