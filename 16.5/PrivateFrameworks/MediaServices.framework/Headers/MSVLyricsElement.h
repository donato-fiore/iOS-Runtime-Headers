// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVLYRICSELEMENT_H
#define MSVLYRICSELEMENT_H

@class NSString;


#import "MSVLyricsXMLElement.h"
#import "MSVLyricsAgent.h"

@interface MSVLyricsElement : MSVLyricsXMLElement

@property (retain, nonatomic) MSVLyricsAgent *agent; // ivar: _agent
@property (nonatomic) CGFloat endTime; // ivar: _endTime
@property (nonatomic) BOOL isBackgroundVocal; // ivar: _isBackgroundVocal
@property (retain, nonatomic) NSString *role; // ivar: _role
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic) NSInteger type; // ivar: _type


+(id)_descriptionForElementType:(NSInteger)arg0 ;
-(id)description;


@end


#endif