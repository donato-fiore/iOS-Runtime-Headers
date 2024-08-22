// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSYSTEMPAPERDOCUMENTCONTROLLER_H
#define ICSYSTEMPAPERDOCUMENTCONTROLLER_H


#import <Foundation/Foundation.h>


@interface ICSystemPaperDocumentController : NSObject {
    ? presenters;
}




+(id)sharedInstance;
-(id)init;
-(id)presenterForPaperIdentifier:(id)arg0 ;
-(void)addPresenter:(id)arg0 ;
-(void)removePresenter:(id)arg0 ;


@end


#endif