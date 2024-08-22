// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPRPROVIDER_H
#define SPRPROVIDER_H


#import <Foundation/Foundation.h>


@interface SPRProvider : NSObject {
    ? subjects;
    ? enabled;
}




+(NSInteger)MAX_CONFIGURATOR_INSTANCE;
+(NSInteger)MAX_MONITOR_INSTANCE;
+(NSInteger)MAX_READER_INSTANCE;
+(id)shared;
-(BOOL)isValidSubject:(id)arg0 ;
-(id)init;
-(id)makeConfigurator:(*id)arg0 ;
-(id)makeMonitor:(*id)arg0 ;
-(id)makeReader:(*id)arg0 ;
-(void)removeSubject:(id)arg0 ;


@end


#endif