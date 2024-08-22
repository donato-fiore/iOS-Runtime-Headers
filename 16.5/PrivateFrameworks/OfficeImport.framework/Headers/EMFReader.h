// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMFREADER_H
#define EMFREADER_H

@class NSString;
@protocol MFReader;

#import <Foundation/Foundation.h>

#import "EMFPlayer.h"

@interface EMFReader : NSObject <MFReader>

 {
    EMFPlayer *m_player;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithEMFPlayer:(id)arg0 ;
-(int)play:(id)arg0 ;


@end


#endif