// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNTRACE_H
#define MNTRACE_H

@class NSMutableArray, NSArray, NSDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MNTrace : NSObject {
    NSMutableArray *_preparedStatements;
}


@property (retain, nonatomic) NSArray *annotatedUserBehavior; // ivar: _annotatedUserBehavior
@property (retain, nonatomic) NSArray *annotatedUserEnvironments; // ivar: _annotatedUserEnvironments
@property (retain, nonatomic) NSArray *bookmarkImages; // ivar: _bookmarkImages
@property (retain, nonatomic) NSArray *bookmarks; // ivar: _bookmarks
@property (readonly, nonatomic) *sqlite3 db; // ivar: _db
@property (retain, nonatomic) NSArray *directions; // ivar: _directions
@property (retain, nonatomic) NSArray *etaUpdates; // ivar: _etaUpdates
@property (retain, nonatomic) NSArray *evData; // ivar: _evData
@property (retain, nonatomic) NSArray *headingData; // ivar: _headingData
@property (nonatomic) BOOL isSimulation; // ivar: _isSimulation
@property (retain, nonatomic) NSArray *locations; // ivar: _locations
@property (readonly, nonatomic) int mainTransportType; // ivar: _mainTransportType
@property (retain, nonatomic) NSDictionary *miscInfo; // ivar: _miscInfo
@property (retain, nonatomic) NSArray *motionData; // ivar: _motionData
@property (retain, nonatomic) NSArray *navigationEvents; // ivar: _navigationEvents
@property (nonatomic) NSUInteger originalVersion; // ivar: _originalVersion
@property (readonly, nonatomic) NSString *tracePath; // ivar: _tracePath
@property (retain, nonatomic) NSArray *vehicleHeadingData; // ivar: _vehicleHeadingData
@property (retain, nonatomic) NSArray *vehicleSpeedData; // ivar: _vehicleSpeedData
@property (nonatomic) NSUInteger version; // ivar: _version
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *writeGroup; // ivar: _writeGroup
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // ivar: _writeQueue


-(BOOL)closeTrace;
-(BOOL)openTrace:(id)arg0 outError:(*id)arg1 ;
-(BOOL)startWritingTraceToPath:(id)arg0 ;
-(id)_handleOpenErrorWithPath:(id)arg0 ;
-(id)init;
-(id)prepareStatement:(id)arg0 outError:(*id)arg1 ;
-(id)serializableBookmarks;
-(void)dealloc;


@end


#endif