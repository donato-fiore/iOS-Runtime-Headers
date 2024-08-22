// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGTRIALCONFIGURATIONSOURCE_H
#define PGTRIALCONFIGURATIONSOURCE_H

@class NSString;
@protocol PGConfigurationSource;

#import <Foundation/Foundation.h>

#import "PGTrialSession.h"

@interface PGTrialConfigurationSource : NSObject <PGConfigurationSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned short namespaceType; // ivar: _namespaceType
@property (readonly) Class superclass;
@property (retain, nonatomic) PGTrialSession *trialSession; // ivar: _trialSession


-(id)initWithTrialSession:(id)arg0 namespaceType:(unsigned short)arg1 ;
-(id)objectForKey:(id)arg0 ;


@end


#endif