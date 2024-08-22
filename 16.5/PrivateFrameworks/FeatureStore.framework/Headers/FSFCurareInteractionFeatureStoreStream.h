// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FSFCURAREINTERACTIONFEATURESTORESTREAM_H
#define FSFCURAREINTERACTIONFEATURESTORESTREAM_H

@class NSString;
@protocol FSFStreamSourceProtocol, FSFFeatureStoreStream;

#import <Foundation/Foundation.h>


@interface FSFCurareInteractionFeatureStoreStream : NSObject <FSFStreamSourceProtocol>

 {
    id<FSFFeatureStoreStream> *_biomeStream;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)createError:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteCurrentStream;
-(BOOL)insert:(id)arg0 error:(*id)arg1 ;
-(id)initWithStreamId:(id)arg0 ;
-(id)retrieve:(id)arg0 ;
-(void)retrieve:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif