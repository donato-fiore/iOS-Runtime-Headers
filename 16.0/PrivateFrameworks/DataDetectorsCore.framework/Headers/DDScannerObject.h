// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDSCANNEROBJECT_H
#define DDSCANNEROBJECT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface DDScannerObject : NSObject {
    *__DDScanner _scanner;
    int _type;
    BOOL _hasBasicType;
    NSXPCConnection *_connectionToService;
}


@property (nonatomic) NSInteger jobIdentifier; // ivar: _jobIdentifier


-(BOOL)hasBasicType;
-(id)initWithType:(int)arg0 enableParsec:(BOOL)arg1 ;
-(id)scanString:(id)arg0 range:(struct ? )arg1 query:(struct __DDScanQuery *)arg2 configuration:(id)arg3 completionBlock:(id)arg4 ;
-(int)type;
-(void)cancel;
-(void)dealloc;


@end


#endif