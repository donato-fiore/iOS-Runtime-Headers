// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKTIMELINEDATAOPERATION_H
#define NTKTIMELINEDATAOPERATION_H

@class CLKCComplicationDataSource, CLKComplication;
@protocol CLKComplicationDataSource;

#import <Foundation/Foundation.h>


@interface NTKTimelineDataOperation : NSObject {
    CLKCComplicationDataSource *_localDataSource;
    id<CLKComplicationDataSource> *_remoteDataSource;
    CLKComplication *_remoteComplication;
}


@property (readonly, nonatomic) BOOL canceled; // ivar: _canceled
@property (readonly, nonatomic) BOOL started; // ivar: _started


+(id)operationWithLocalDataSource:(id)arg0 ;
+(id)operationWithRemoteDataSource:(id)arg0 complication:(id)arg1 ;
-(BOOL)_validateEntry:(id)arg0 ;
-(BOOL)_validateTemplate:(id)arg0 ;
-(id)_finalizedValidEntries:(id)arg0 ;
-(void)_cancel;
-(void)_start;
-(void)cancel;
-(void)start;


@end


#endif