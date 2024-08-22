// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTFEEDTRANSFORMATIONLIMIT_H
#define NTFEEDTRANSFORMATIONLIMIT_H

@class NSString;
@protocol NTFeedTransforming;

#import <Foundation/Foundation.h>


@interface NTFeedTransformationLimit : NSObject <NTFeedTransforming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (readonly) Class superclass;


-(id)init;
-(id)initWithLimit:(NSUInteger)arg0 ;
-(id)transformFeedItems:(id)arg0 ;


@end


#endif