// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKBLOCKBASEDSNAPSHOTREQUESTER_H
#define MKBLOCKBASEDSNAPSHOTREQUESTER_H

@class NSString;
@protocol MKMapSnapshotCreatorRequester;

#import <Foundation/Foundation.h>


@interface MKBlockBasedSnapshotRequester : NSObject <MKMapSnapshotCreatorRequester>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *handler; // ivar: handler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)snapshotRequesterWitHandler:(id)arg0 ;
-(void)mapSnapshotCreator:(id)arg0 didCreateSnapshot:(id)arg1 attributionString:(id)arg2 context:(id)arg3 ;


@end


#endif