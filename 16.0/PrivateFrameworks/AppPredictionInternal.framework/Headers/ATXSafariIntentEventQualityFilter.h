// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSAFARIINTENTEVENTQUALITYFILTER_H
#define ATXSAFARIINTENTEVENTQUALITYFILTER_H


#import <Foundation/Foundation.h>

#import "ATXContextKitClient.h"

@interface ATXSafariIntentEventQualityFilter : NSObject

@property (readonly, nonatomic) ATXContextKitClient *ckClient; // ivar: _ckClient


-(BOOL)shouldAcceptSafariDonation:(id)arg0 ;
-(BOOL)shouldBlockURLForObjectionableContent:(id)arg0 ;
-(id)init;
-(id)initWithContextKitClient:(id)arg0 ;


@end


#endif