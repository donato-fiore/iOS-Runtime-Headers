// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHACAMERASMARTSHARINGTASK_H
#define PHACAMERASMARTSHARINGTASK_H

@class NSString, PHLibraryScope;
@protocol PHATask;

#import <Foundation/Foundation.h>


@interface PHACameraSmartSharingTask : NSObject <PHATask>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHLibraryScope *libraryScope; // ivar: _libraryScope
@property (retain, nonatomic) NSString *libraryScopeLocalIdentifier; // ivar: _libraryScopeLocalIdentifier
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CGFloat period;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger version;


-(BOOL)currentPlatformIsSupported;
-(BOOL)runWithGraphManager:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(BOOL)shouldRunWithGraphManager:(id)arg0 ;
-(id)_libraryScopeToUseWithGraphManager:(id)arg0 error:(*id)arg1 ;


@end


#endif