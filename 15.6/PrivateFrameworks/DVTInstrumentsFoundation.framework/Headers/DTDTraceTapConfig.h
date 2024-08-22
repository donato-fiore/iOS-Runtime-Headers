// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTDTRACETAPCONFIG_H
#define DTDTRACETAPCONFIG_H

@class NSURL, NSString, NSDictionary;


#import "DTTapConfig.h"

@interface DTDTraceTapConfig : DTTapConfig {
    NSURL *_archivingURL;
    BOOL _createdArchivingURL;
}


@property (nonatomic) *void authorization; // ivar: _authorization
@property (readonly, nonatomic) BOOL isAllProcesses;
@property (nonatomic) unsigned int maxStackDepth;
@property (retain, nonatomic) NSString *preprocessorPath;
@property (retain, nonatomic) NSDictionary *scriptTextByIdentifier;
@property (copy, nonatomic) id *sessionHandler; // ivar: _sessionHandler
@property (nonatomic) int targetPid;


+(id)dtraceDataFileName;
-(BOOL)setArchivingURL:(id)arg0 error:(*id)arg1 ;
-(id)archivingURL;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif