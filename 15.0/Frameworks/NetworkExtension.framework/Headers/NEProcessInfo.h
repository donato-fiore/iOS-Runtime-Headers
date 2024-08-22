// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEPROCESSINFO_H
#define NEPROCESSINFO_H


#import <Foundation/Foundation.h>


@interface NEProcessInfo : NSObject



+(BOOL)is64bitCapable;
+(id)copyDNSUUIDs;
+(id)copyNEHelperUUIDs;
+(id)copyUUIDForSingleArch:(int)arg0 ;
+(id)copyUUIDsForBundleID:(id)arg0 uid:(unsigned int)arg1 ;
+(id)copyUUIDsForExecutable:(id)arg0 ;
+(id)copyUUIDsForFatBinary:(int)arg0 ;
+(id)copyUUIDsFromExecutable:(char *)arg0 ;
+(void)clearUUIDCache;
+(void)initGlobals;
-(id)init;


@end


#endif