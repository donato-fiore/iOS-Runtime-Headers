// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFIMAPFETCHUNIT_H
#define _MFIMAPFETCHUNIT_H

@class NSString;
@protocol MFDataConsumer;

#import <Foundation/Foundation.h>

#import "MFIMAPFetchResult.h"

@interface _MFIMAPFetchUnit : NSObject {
    MFIMAPFetchResult *_expectedFetchResult;
}


@property (retain, nonatomic) NSObject<MFDataConsumer> *bodyDataConsumer; // ivar: _bodyDataConsumer
@property (retain, nonatomic) NSString *consumerSection; // ivar: _consumerSection
@property (copy, nonatomic) NSString *fetchItem; // ivar: _fetchItem
@property (nonatomic) unsigned int uid; // ivar: _uid


-(BOOL)matchesFetchResponse:(id)arg0 ;
-(id)copyFailedFetchResponse;
-(void)_setupExpectedFetchResult;
-(void)dealloc;


@end


#endif