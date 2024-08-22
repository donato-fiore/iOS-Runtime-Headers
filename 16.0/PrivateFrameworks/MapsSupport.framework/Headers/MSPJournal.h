// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPJOURNAL_H
#define MSPJOURNAL_H

@class NSString, NSFileHandle, NSISO8601DateFormatter;
@protocol OS_dispatch_queue, MSPJournaling;

#import <Foundation/Foundation.h>


@interface MSPJournal : NSObject {
    NSString *_path;
    NSFileHandle *_writeHandle;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSISO8601DateFormatter *_dateFormatter;
    BOOL _analyticsEnabled;
    BOOL _loggingEnabled;
    BOOL _journalEnabled;
}


@property (weak, nonatomic) NSObject<MSPJournaling> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *path;


-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 options:(NSUInteger)arg1 ;
-(id)rotatedPath;
-(void)appendToJournal:(id)arg0 format:(id)arg1 ;
-(void)appendToLog:(id)arg0 format:(id)arg1 ;
-(void)dealloc;
-(void)noteChangeWithState:(id)arg0 ;
-(void)noteChangeWithState:(id)arg0 affectedObject:(id)arg1 ;
-(void)noteChangeWithState:(id)arg0 error:(id)arg1 ;
-(void)noteChangeWithState:(id)arg0 format:(id)arg1 ;
-(void)noteChangeWithState:(id)arg0 payload:(id)arg1 ;
-(void)rotateLogIfNeeded;
-(void)sendTelemetryForState:(id)arg0 affectedObject:(id)arg1 ;


@end


#endif