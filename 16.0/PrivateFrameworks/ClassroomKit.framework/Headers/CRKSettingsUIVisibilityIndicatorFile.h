// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKSETTINGSUIVISIBILITYINDICATORFILE_H
#define CRKSETTINGSUIVISIBILITYINDICATORFILE_H

@class NSString;
@protocol CRKMarker;

#import <Foundation/Foundation.h>


@interface CRKSettingsUIVisibilityIndicatorFile : NSObject <CRKMarker>

 {
    id<CRKMarker> *mFileMarker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL exists;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)fileURL;
-(BOOL)createWithError:(*id)arg0 ;
-(BOOL)deleteWithError:(*id)arg0 ;
-(id)init;


@end


#endif