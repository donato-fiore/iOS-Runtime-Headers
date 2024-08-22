// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ICPORTRAITLEXICONSOURCE_H
#define _ICPORTRAITLEXICONSOURCE_H

@class PPContactStore, PPContactNameRecordLoadingDelegate, PPNamedEntityStore, PPNamedEntityRecordLoadingDelegate;
@protocol _ICLexiconSourcing, _ICFeedbackAccepting;

#import <Foundation/Foundation.h>

#import "_ICLexiconManager.h"

@interface _ICPortraitLexiconSource : NSObject <_ICLexiconSourcing, _ICFeedbackAccepting>

 {
    _ICLexiconManager *_manager;
    PPContactStore *_contactStore;
    PPContactNameRecordLoadingDelegate *_contactDelegate;
    PPNamedEntityStore *_namedEntityStore;
    PPNamedEntityRecordLoadingDelegate *_namedEntityDelegate;
}




-(id)_makeContactDelegate;
-(id)_makeNamedEntityDelegate;
-(id)_makePPNamedEntityStore;
-(id)init;
-(void)hibernate;
-(void)provideFeedbackForString:(id)arg0 type:(unsigned char)arg1 style:(unsigned char)arg2 ;
-(void)startLoadingWithManager:(id)arg0 ;
-(void)warmUp;


@end


#endif