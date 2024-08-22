// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRILOGTREATMENTREADER_H
#define TRILOGTREATMENTREADER_H

@class NSString;
@protocol TRIPaths;

#import <Foundation/Foundation.h>


@interface TRILogTreatmentReader : NSObject {
    int _projectId;
    id<TRIPaths> *_paths;
}


@property (readonly) NSString *path;


+(id)readerWithProjectId:(int)arg0 paths:(id)arg1 ;
-(id)fetchRolloutLogNamespaces;
-(id)initWithProjectId:(int)arg0 paths:(id)arg1 ;
-(id)namespaceLoggingTreatmentPath;
-(id)treatments;


@end


#endif