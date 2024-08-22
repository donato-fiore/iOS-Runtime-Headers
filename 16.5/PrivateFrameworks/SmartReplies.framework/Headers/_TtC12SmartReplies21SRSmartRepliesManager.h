// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12SMARTREPLIES21SRSMARTREPLIESMANAGER_H
#define _TTC12SMARTREPLIES21SRSMARTREPLIESMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC12SmartReplies21SRSmartRepliesManager : NSObject {
    ? experimentsManager;
    ? actionMetadataController;
    ? textPreprocessor;
}




+(id)shared;
-(id)init;
-(id)suggestionsFor:(id)arg0 ;
-(void)suggestionsFor:(id)arg0 completion:(id)arg1 ;


@end


#endif