// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDMICROLOCATIONVISITUTILITY_H
#define GDMICROLOCATIONVISITUTILITY_H

@class BMStream;

#import <Foundation/Foundation.h>


@interface GDMicroLocationVisitUtility : NSObject {
    BMStream *_microLocationVisitStream;
}




-(id)_rawMicroLocationVisitEventPublisherFrom:(id)arg0 to:(id)arg1 reversed:(BOOL)arg2 ;
-(id)initWithMicroLocationVisitStream:(id)arg0 ;
-(id)lastMicroLocationVisitEventPriorTo:(id)arg0 ;
-(id)microLocationVisitEventPublisherFrom:(id)arg0 to:(id)arg1 ;


@end


#endif