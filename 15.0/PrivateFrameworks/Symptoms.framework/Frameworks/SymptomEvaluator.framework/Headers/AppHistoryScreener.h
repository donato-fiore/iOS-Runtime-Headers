// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APPHISTORYSCREENER_H
#define APPHISTORYSCREENER_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface AppHistoryScreener : NSObject {
    NSMapTable *episodes;
}




+(id)_sharedInstance;
+(id)description;
+(id)fetchEpisodeFor:(id)arg0 inbound:(BOOL)arg1 ;
-(id)_fetchEpisodeFor:(id)arg0 inbound:(BOOL)arg1 ;
-(id)description;
-(id)init;
-(void)_makeLabelWith:(id)arg0 inbound:(BOOL)arg1 fullLabel:(*id)arg2 exportLabel:(*id)arg3 ;


@end


#endif