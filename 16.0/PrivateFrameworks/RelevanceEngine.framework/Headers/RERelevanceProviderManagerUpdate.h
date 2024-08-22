// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RERELEVANCEPROVIDERMANAGERUPDATE_H
#define RERELEVANCEPROVIDERMANAGERUPDATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "RERelevanceProvider.h"

@interface RERelevanceProviderManagerUpdate : NSObject <NSCopying>

 {
    RERelevanceProvider *_provider;
}


@property (readonly, nonatomic) BOOL allProviders;
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) RERelevanceProvider *provider;


+(id)immediateUpdateForAllProviders;
+(id)immediateUpdateForProvider:(id)arg0 ;
+(id)scheduledUpdateForAllProvidersAtDate:(id)arg0 ;
+(id)scheduledUpdateForProvider:(id)arg0 atDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithProvider:(id)arg0 ;


@end


#endif