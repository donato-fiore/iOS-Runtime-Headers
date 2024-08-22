// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPARSECAUXILIARYINFO_H
#define WBSPARSECAUXILIARYINFO_H

@class WBSParsecModel, NSString;



@interface WBSParsecAuxiliaryInfo : WBSParsecModel

@property (readonly, copy, nonatomic) NSString *bottomText; // ivar: _bottomText
@property (readonly, copy, nonatomic) NSString *bottomTextColor; // ivar: _bottomTextColor
@property (readonly, copy, nonatomic) NSString *middleText; // ivar: _middleText
@property (readonly, copy, nonatomic) NSString *topText; // ivar: _topText


+(id)schema;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif