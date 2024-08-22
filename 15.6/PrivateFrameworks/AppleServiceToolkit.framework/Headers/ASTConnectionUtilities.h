// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASTCONNECTIONUTILITIES_H
#define ASTCONNECTIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface ASTConnectionUtilities : NSObject



+(BOOL)didEncounterNetworkDisconnectionError:(id)arg0 ;
+(BOOL)isGzipEnabled;
+(BOOL)isValidResponse:(id)arg0 ;
+(BOOL)relaxTimeouts;
+(BOOL)trustIsValidWithProtectionSpace:(id)arg0 rootOfTrust:(NSUInteger)arg1 ;
+(BOOL)useChunkedTransferEncoding;
+(NSUInteger)allowCellularSizeThreshold;
+(id)MD5HeaderValueForTask:(id)arg0 ;
+(id)getServerLoggingSelection;


@end


#endif