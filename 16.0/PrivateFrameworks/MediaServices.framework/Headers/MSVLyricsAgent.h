// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSVLYRICSAGENT_H
#define MSVLYRICSAGENT_H

@class NSString;


#import "MSVLyricsXMLElement.h"

@interface MSVLyricsAgent : MSVLyricsXMLElement

@property (copy, nonatomic) NSString *artistID; // ivar: _artistID
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *type; // ivar: _type


-(id)description;


@end


#endif