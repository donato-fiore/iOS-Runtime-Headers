// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NVIDATALOGGER_H
#define NVIDATALOGGER_H

@class NSString, NSOutputStream;
@protocol NSStreamDelegate;

#import <Foundation/Foundation.h>


@interface NviDataLogger : NSObject <NSStreamDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSOutputStream *oStream; // ivar: _oStream
@property (readonly) Class superclass;


-(id)initWithFilePath:(id)arg0 appendHdr:(id)arg1 ;
-(void)endRequest;
-(void)logData:(id)arg0 ;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;


@end


#endif