// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUICOMPLETION_H
#define SKUICOMPLETION_H

@class NSString, NSMutableDictionary;
@protocol SKUICacheCoding;

#import <Foundation/Foundation.h>


@interface SKUICompletion : NSObject <SKUICacheCoding>



@property (readonly, nonatomic) NSString *URLString; // ivar: _URLString
@property (readonly, nonatomic) NSString *alternateTitle; // ivar: _alternateTitle
@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)initWithCacheRepresentation:(id)arg0 ;
-(id)initWithCompletionDictionary:(id)arg0 ;


@end


#endif