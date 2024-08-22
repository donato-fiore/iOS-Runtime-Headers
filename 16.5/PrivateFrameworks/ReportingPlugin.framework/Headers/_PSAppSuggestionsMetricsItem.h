// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSAPPSUGGESTIONSMETRICSITEM_H
#define _PSAPPSUGGESTIONSMETRICSITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _PSAppSuggestionsMetricsItem : NSObject {
    ? transportBundleId;
    ? model;
}


@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) unsigned char rank; // ivar: rank
@property (nonatomic, readonly) NSString *transportBundleId;


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithTransportBundleId:(id)arg0 model:(id)arg1 rank:(unsigned char)arg2 ;


@end


#endif