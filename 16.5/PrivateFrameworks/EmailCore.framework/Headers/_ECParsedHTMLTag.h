// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ECPARSEDHTMLTAG_H
#define _ECPARSEDHTMLTAG_H

@class ECParsedHTMLNode, NSString;



@interface _ECParsedHTMLTag : ECParsedHTMLNode {
    NSString *_tagName;
}




-(id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg0 ;
-(id)description;
-(id)tagName;
-(void)dealloc;
-(void)setTagName:(id)arg0 ;


@end


#endif