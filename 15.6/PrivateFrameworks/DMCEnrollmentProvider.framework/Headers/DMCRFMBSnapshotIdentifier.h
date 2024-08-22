// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCRFMBSNAPSHOTIDENTIFIER_H
#define DMCRFMBSNAPSHOTIDENTIFIER_H

@class NSString, MBSnapshotIdentifier;
@protocol DMCRFSnapshotIdentifier;

#import <Foundation/Foundation.h>


@interface DMCRFMBSnapshotIdentifier : NSObject <DMCRFSnapshotIdentifier>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) MBSnapshotIdentifier *wrappedValue; // ivar: _wrappedValue


-(id)initWithMBSnapshotIdentifier:(id)arg0 ;


@end


#endif