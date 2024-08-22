// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTREEXMLDOCUMENTSTRIPPER_H
#define WFTREEXMLDOCUMENTSTRIPPER_H

@class NSString, NSMutableDictionary, NSMutableArray;
@protocol WFWebPageProtocol;

#import <Foundation/Foundation.h>


@interface WFTreeXMLDocumentStripper : NSObject <WFWebPageProtocol>

 {
    ? xmlDocument;
    NSString *pageTitle;
    NSMutableDictionary *metaTagsLabeled;
    NSMutableArray *metaTagsUnlabeled;
    NSMutableArray *scriptBlocks;
    NSMutableArray *images;
    NSString *pageContent;
    NSMutableArray *links;
    BOOL hasFrameset;
    BOOL hasShortRefresh;
}




+(id)treeStripperWithXMLDocument:(struct _xmlDoc *)arg0 ;
-(?)processXMLDocument;
-(?)processXMLDocumentblockComments;
-(?)setXMLDocument;
-(BOOL)hasFrameset;
-(BOOL)hasShortRefresh;
-(id)URLString;
-(id)description;
-(id)images;
-(id)initWithXMLDocument:(struct _xmlDoc *)arg0 ;
-(id)links;
-(id)metaTagDescription;
-(id)metaTagKeywords;
-(id)metaTagRating;
-(id)metaTagsLabeled;
-(id)metaTagsUnlabeled;
-(id)pageContent;
-(id)pageTitle;
-(id)scriptBlocks;
-(void)dealloc;
-(void)setPageTitle:(id)arg0 ;
-(void)strip;


@end


#endif