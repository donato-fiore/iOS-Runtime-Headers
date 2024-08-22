// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSAVPARSINGSESSION_H
#define BCSAVPARSINGSESSION_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "BCSQRCodeParser.h"

@interface BCSAVParsingSession : NSObject {
    BCSQRCodeParser *_parser;
    NSDictionary *_lastScannedCodeBasicDescriptor;
    CGFloat _lastScannedTime;
}




-(BOOL)_isLikelyLastScannedObject:(id)arg0 ;
-(BOOL)_shouldSkipIncomingObject:(id)arg0 ;
-(CGFloat)_temporalStickyFactorForObject:(id)arg0 ;
-(id)_bestObjectForParsing:(id)arg0 ;
-(id)init;
-(void)_updateSessionWithMetadataObject:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)updateSessionWithMetadataObjects:(id)arg0 ;
-(void)updateSessionWithMetadataObjects:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif