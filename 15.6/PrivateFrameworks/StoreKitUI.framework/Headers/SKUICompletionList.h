// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUICOMPLETIONLIST_H
#define SKUICOMPLETIONLIST_H

@class NSMutableDictionary, NSArray, NSString;
@protocol SKUICacheCoding;

#import <Foundation/Foundation.h>


@interface SKUICompletionList : NSObject <SKUICacheCoding>



@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly, nonatomic) NSArray *completions; // ivar: _completions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)initWithCacheRepresentation:(id)arg0 ;
-(id)initWithCompletionListDictionary:(id)arg0 ;


@end


#endif