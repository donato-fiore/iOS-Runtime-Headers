// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13SOFTPOSREADER9SLAMSWIFT_H
#define _TTC13SOFTPOSREADER9SLAMSWIFT_H

@class SwiftObject;
@protocol SLAMSEHandle, SLAMLogSink;



@interface _TtC13SoftPosReader9SLAMSwift : SwiftObject <SLAMSEHandle, SLAMLogSink>

 {
    ? session;
    ? updateBlk;
    ? counter;
    ? apduCount;
    ? non9000response;
}




-(id)transceive:(id)arg0 error:(*id)arg1 ;
-(void)log:(id)arg0 ;


@end


#endif