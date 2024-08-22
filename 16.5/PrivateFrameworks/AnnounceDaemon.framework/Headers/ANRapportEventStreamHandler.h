// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANRAPPORTEVENTSTREAMHANDLER_H
#define ANRAPPORTEVENTSTREAMHANDLER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ANRapportEventStreamHandler : NSObject

@property (readonly, nonatomic) NSMutableDictionary *rapportActivationHandlers; // ivar: _rapportActivationHandlers


-(id)init;
-(void)addAnnounceRapportServiceType;
-(void)addRapportServiceType:(id)arg0 activationBlock:(id)arg1 ;
-(void)setEventStreamHandler;


@end


#endif