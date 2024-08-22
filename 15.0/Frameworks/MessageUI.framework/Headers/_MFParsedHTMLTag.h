// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFPARSEDHTMLTAG_H
#define _MFPARSEDHTMLTAG_H

@class MFParsedHTMLNode, NSString;



@interface _MFParsedHTMLTag : MFParsedHTMLNode {
    NSString *_tagName;
}




-(id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg0 ;
-(id)description;
-(id)tagName;
-(void)dealloc;
-(void)setTagName:(id)arg0 ;


@end


#endif