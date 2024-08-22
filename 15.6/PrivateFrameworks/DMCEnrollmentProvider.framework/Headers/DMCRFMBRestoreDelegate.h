// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCRFMBRESTOREDELEGATE_H
#define DMCRFMBRESTOREDELEGATE_H

@protocol MBManagerDelegate, DMCRFSnapshotSourceDelegate, DMCRFSnapshotSource;

#import <Foundation/Foundation.h>


@interface DMCRFMBRestoreDelegate : NSObject <MBManagerDelegate>



@property (weak, nonatomic) NSObject<DMCRFSnapshotSourceDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) NSObject<DMCRFSnapshotSource> *snapshotSource; // ivar: _snapshotSource


-(id)initWithDelegate:(id)arg0 source:(id)arg1 ;
-(void)managerDidFinishRestore:(id)arg0 ;


@end


#endif