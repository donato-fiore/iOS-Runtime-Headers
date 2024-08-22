// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFSESHATSESSION_H
#define NFSESHATSESSION_H

@class NSString;
@protocol NFSeshatSessionCallbacks;


#import "NFSession.h"

@interface NFSeshatSession : NFSession <NFSeshatSessionCallbacks>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isTransientError:(struct ? )arg0 ;
+(NSUInteger)largeCrumbsFromError:(id)arg0 ;
+(unsigned int)smallCrumbsFromError:(id)arg0 ;
-(struct ? )allocateSlot:(unsigned char)arg0 authorizingUser:(unsigned char)arg1 authorizingUserToken:(id)arg2 outToken:(*id)arg3 outWriteCount:(*unsigned int)arg4 ;
-(struct ? )allocateSlot:(unsigned char)arg0 authorizingUser:(unsigned char)arg1 authorizingUserToken:(id)arg2 outToken:(*id)arg3 outWriteCount:(*unsigned int)arg4 trackingError:(*id)arg5 ;
-(struct ? )authorizeUpdate:(BOOL)arg0 slotIndex:(unsigned char)arg1 userToken:(id)arg2 outWriteCount:(*unsigned int)arg3 ;
-(struct ? )authorizeUpdate:(BOOL)arg0 slotIndex:(unsigned char)arg1 userToken:(id)arg2 outWriteCount:(*unsigned int)arg3 trackingError:(*id)arg4 ;
-(struct ? )deleteSlot:(unsigned char)arg0 outWriteCount:(*unsigned int)arg1 ;
-(struct ? )deleteSlot:(unsigned char)arg0 outWriteCount:(*unsigned int)arg1 trackingError:(*id)arg2 ;
-(struct ? )derive:(unsigned char)arg0 userHash:(id)arg1 outData:(*id)arg2 outWriteCount:(*unsigned int)arg3 ;
-(struct ? )derive:(unsigned char)arg0 userHash:(id)arg1 outData:(*id)arg2 outWriteCount:(*unsigned int)arg3 trackingError:(*id)arg4 ;
-(struct ? )getData:(*id)arg0 updateKUD:(char *)arg1 outWriteLimit:(*unsigned int)arg2 outWriteCount:(*unsigned int)arg3 ;
-(struct ? )getData:(*id)arg0 updateKUD:(char *)arg1 outWriteLimit:(*unsigned int)arg2 outWriteCount:(*unsigned int)arg3 trackingError:(*id)arg4 ;
-(struct ? )getHash:(*id)arg0 ;
-(struct ? )getHash:(*id)arg0 trackingError:(*id)arg1 ;
-(struct ? )obliterate;
-(struct ? )obliterateWithTrackingError:(*id)arg0 ;
-(struct ? )resetCounter:(unsigned char)arg0 userToken:(id)arg1 outWriteCount:(*unsigned int)arg2 ;
-(struct ? )resetCounter:(unsigned char)arg0 userToken:(id)arg1 outWriteCount:(*unsigned int)arg2 trackingError:(*id)arg3 ;
-(struct ? )upgradeKey:(unsigned char)arg0 inputData:(id)arg1 outWriteCount:(*unsigned int)arg2 ;
-(struct ? )upgradeKey:(unsigned char)arg0 inputData:(id)arg1 outWriteCount:(*unsigned int)arg2 trackingError:(*id)arg3 ;


@end


#endif