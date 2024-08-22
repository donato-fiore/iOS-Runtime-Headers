// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC26AIMLINSTRUMENTATIONSTREAMS25SIRICONVERSATIONPUBLISHER_H
#define _TTC26AIMLINSTRUMENTATIONSTREAMS25SIRICONVERSATIONPUBLISHER_H

@class BMBookmarkablePublisher, NSArray;



@interface _TtC26AIMLInstrumentationStreams25SiriConversationPublisher : BMBookmarkablePublisher {
    ? upstream;
    ? inner;
}


@property (nonatomic, readonly) NSArray *bookmarkableUpstreams;


+(id)publisherWithPublisher:(id)arg0 upstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(id)init;
-(void)subscribe:(id)arg0 ;


@end


#endif