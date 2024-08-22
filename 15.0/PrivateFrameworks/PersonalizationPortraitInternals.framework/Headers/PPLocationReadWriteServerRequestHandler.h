// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPLOCATIONREADWRITESERVERREQUESTHANDLER_H
#define PPLOCATIONREADWRITESERVERREQUESTHANDLER_H

@protocol PPLocationReadWriteServerProtocol;

#import <Foundation/Foundation.h>


@interface PPLocationReadWriteServerRequestHandler : NSObject <PPLocationReadWriteServerProtocol>





-(void)clearWithCompletion:(id)arg0 ;
-(void)cloudSyncWithCompletion:(id)arg0 ;
-(void)donateLocations:(id)arg0 source:(id)arg1 contextualNamedEntities:(id)arg2 algorithm:(unsigned short)arg3 cloudSync:(BOOL)arg4 decayRate:(CGFloat)arg5 completion:(id)arg6 ;


@end


#endif