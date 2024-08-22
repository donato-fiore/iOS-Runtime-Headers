// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVLYRICSSONGWRITER_H
#define MSVLYRICSSONGWRITER_H

@class NSString;


#import "MSVLyricsXMLElement.h"

@interface MSVLyricsSongWriter : MSVLyricsXMLElement

@property (copy, nonatomic) NSString *artistID; // ivar: _artistID
@property (copy, nonatomic) NSString *name; // ivar: _name


-(id)description;
-(id)init;


@end


#endif