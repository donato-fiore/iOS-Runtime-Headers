// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASMOVEDITEM_H
#define ASMOVEDITEM_H

@class NSString, NSNumber;


#import "ASItem.h"

@interface ASMovedItem : ASItem {
    NSString *_srcMsgId;
    NSNumber *_status;
    NSString *_dstMsgId;
}




+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)dstMsgId;
-(id)srcMsgId;
-(id)status;
-(void)setDstMsgId:(id)arg0 ;
-(void)setSrcMsgId:(id)arg0 ;
-(void)setStatus:(id)arg0 ;


@end


#endif