// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSPEOPLESUGGESTIONSMETRICSITEMINTERNAL_H
#define _PSPEOPLESUGGESTIONSMETRICSITEMINTERNAL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _PSPeopleSuggestionsMetricsItemInternal : NSObject {
    ? id;
    ? model;
    ? transportBundleId;
}


@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) unsigned char rank; // ivar: rank
@property (nonatomic, readonly) NSString *transportBundleId;


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithId:(id)arg0 model:(id)arg1 transportBundleId:(id)arg2 rank:(unsigned char)arg3 ;


@end


#endif