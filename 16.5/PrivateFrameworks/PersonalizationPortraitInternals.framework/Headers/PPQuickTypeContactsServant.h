// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPQUICKTYPECONTACTSSERVANT_H
#define PPQUICKTYPECONTACTSSERVANT_H

@class NSCache;
@protocol PPQuickTypeServantProtocol;

#import <Foundation/Foundation.h>

#import "PPLocalContactStore.h"

@interface PPQuickTypeContactsServant : NSObject <PPQuickTypeServantProtocol>

 {
    PPLocalContactStore *_localContactStore;
    NSCache *_meQuickTypeItemCache;
    NSCache *_cachedNameLookups;
}




-(id)init;
-(id)initWithOptions:(unsigned char)arg0 ;
-(id)quickTypeItemsWithQuery:(id)arg0 limit:(NSUInteger)arg1 explanationSet:(id)arg2 ;
-(void)clearCaches;


@end


#endif