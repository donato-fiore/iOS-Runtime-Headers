// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMFILEINTERFACE_H
#define CMFILEINTERFACE_H


#import <Foundation/Foundation.h>

#import "CMDataContainer.h"

@interface CMFileInterface : NSObject {
    CMDataContainer *_cmDataContainer;
}




+(BOOL)writeContainerToFileURL:(id)arg0 container:(id)arg1 ;
+(void)updateCV3DVersion:(id)arg0 container:(id)arg1 ;
+(void)updateCVPlayerVersion:(id)arg0 container:(id)arg1 ;
+(void)updateSessionID:(id)arg0 container:(id)arg1 ;
-(BOOL)saveToFileURL:(id)arg0 ;
-(id)cv3dVersion;
-(id)cvPlayerVersion;
-(id)deviceString;
-(id)grabNextEvent;
-(id)grabNextRecvData;
-(id)grabNextRecvMessage;
-(id)grabNextSentData;
-(id)grabNextSentMessage;
-(id)iOSVersion;
-(id)initReaderWithFileURL:(id)arg0 ;
-(id)initWriter;
-(id)macOSVersion;
-(id)sessionID;
-(id)version;
-(void)processCMData:(id)arg0 ;
-(void)processCMData:(id)arg0 sending:(BOOL)arg1 ;
-(void)resetReader;
-(void)updateCV3DVersion:(id)arg0 ;
-(void)updateCVPlayerVersion:(id)arg0 ;
-(void)updateSessionID:(id)arg0 ;


@end


#endif