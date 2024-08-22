// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FSFCURAREINTERACTIONSTREAM_H
#define FSFCURAREINTERACTIONSTREAM_H

@protocol FSFFeatureStoreStream;

#import <Foundation/Foundation.h>


@interface FSFCurareInteractionStream : NSObject {
    id<FSFFeatureStoreStream> *_biomeStream;
}




+(BOOL)createError:(id)arg0 error:(*id)arg1 ;
+(id)getWithStreamId:(id)arg0 ;
-(BOOL)insert:(id)arg0 error:(*id)arg1 ;
-(id)initWithStreamId:(id)arg0 ;
-(id)retrieve:(id)arg0 ;


@end


#endif