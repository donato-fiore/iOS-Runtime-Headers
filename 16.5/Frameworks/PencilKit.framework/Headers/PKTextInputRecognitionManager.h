// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTEXTINPUTRECOGNITIONMANAGER_H
#define PKTEXTINPUTRECOGNITIONMANAGER_H

@class NSArray, CHRecognitionSession, CHTextInputQuery, NSString;
@protocol CHQueryDelegate, CHRecognitionSessionDataSource, CHTextInputQueryTargetDataSource, PKTextInputDebugStateReporting, PKTextInputRecognitionManagerDataSource;

#import <Foundation/Foundation.h>


@interface PKTextInputRecognitionManager : NSObject <CHQueryDelegate, CHRecognitionSessionDataSource, CHTextInputQueryTargetDataSource, PKTextInputDebugStateReporting>

 {
    BOOL _preferOutOfProcessRecognition;
    NSArray *_recognitionLocales;
    id<PKTextInputRecognitionManagerDataSource> *_currentDataSource;
    CHRecognitionSession *__recognitionSession;
    CHTextInputQuery *__textInputQuery;
    CGFloat __beganRecognitionTimestamp;
    CGFloat __lastRecognitionDuration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *textInputTargets;


-(id)strokeProviderSnapshot;
-(id)textInputTargetForItemStableIdentifier:(id)arg0 strokeIdentifiers:(id)arg1 ;
-(id)textInputTargetForItemStableIdentifier:(id)arg0 strokeIdentifiers:(id)arg1 simultaneousItemStableIdentifiers:(id)arg2 ;
-(void)dealloc;
-(void)fetchContentInfoForTextInputTarget:(id)arg0 strokeIdentifiers:(id)arg1 completion:(id)arg2 ;
-(void)queryDidUpdateResult:(id)arg0 ;
-(void)reportDebugStateDescription:(id)arg0 ;


@end


#endif