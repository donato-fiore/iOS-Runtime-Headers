// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17PREVIEWSINJECTION19UVPREVIEWNONUIAGENT_H
#define _TTC17PREVIEWSINJECTION19UVPREVIEWNONUIAGENT_H

@class TtC17PreviewsInjection14UVPreviewAgent;
@protocol UVAgentPreviewNonUIServiceProtocol;



@interface _TtC17PreviewsInjection19UVPreviewNonUIAgent : TtC17PreviewsInjection14UVPreviewAgent <UVAgentPreviewNonUIServiceProtocol>

 {
    ? serviceConnection;
    ? entryPoints;
}




-(id)init;
-(void)performUpdate:(id)arg0 replyHandler:(id)arg1 ;


@end


#endif