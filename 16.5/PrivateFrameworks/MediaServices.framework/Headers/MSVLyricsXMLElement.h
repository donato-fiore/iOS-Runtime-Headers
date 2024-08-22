// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVLYRICSXMLELEMENT_H
#define MSVLYRICSXMLELEMENT_H

@class NSString, NSMutableString;

#import <Foundation/Foundation.h>


@interface MSVLyricsXMLElement : NSObject

@property (copy, nonatomic) NSString *elementName; // ivar: _elementName
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSMutableString *mutableText; // ivar: _mutableText


-(id)description;


@end


#endif