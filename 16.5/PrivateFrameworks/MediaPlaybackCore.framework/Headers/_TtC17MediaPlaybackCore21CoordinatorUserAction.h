// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MEDIAPLAYBACKCORE21COORDINATORUSERACTION_H
#define _TTC17MEDIAPLAYBACKCORE21COORDINATORUSERACTION_H

@class SwiftObject, NSString, NSDictionary;
@protocol MFUserAction, MFTimeStamp;



@interface _TtC17MediaPlaybackCore21CoordinatorUserAction : SwiftObject <MFUserAction>

 {
    ? identifier;
    ? options;
    ? sourceID;
}


@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic) NSInteger source; // ivar: source
@property (nonatomic, copy) NSString *sourceID;
@property (nonatomic, retain) NSObject<MFTimeStamp> *timeStamp; // ivar: timeStamp
@property (nonatomic) NSInteger type; // ivar: type




@end


#endif