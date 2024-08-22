// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPFONTFACE_H
#define TSWPFONTFACE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSWPFontFace : NSObject

@property (retain, nonatomic) NSString *faceName; // ivar: _faceName
@property (retain, nonatomic) NSString *postScriptName; // ivar: _postScriptName


+(id)fontFaceWithPostScriptName:(id)arg0 faceName:(id)arg1 ;
-(id)description;
-(id)initWithPostScriptName:(id)arg0 faceName:(id)arg1 ;


@end


#endif