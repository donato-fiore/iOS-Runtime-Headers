// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBDOCUMENT_H
#define WBDOCUMENT_H


#import <Foundation/Foundation.h>


@interface WBDocument : NSObject



+(id)readFrom:(id)arg0 ;
+(void)readNoteSeparatorFrom:(id)arg0 type:(int)arg1 separator:(id)arg2 ;
+(void)readProperties:(id)arg0 document:(id)arg1 ;
+(void)readSectionsFrom:(id)arg0 document:(id)arg1 ;
+(void)readTextBoxesFrom:(id)arg0 ;
+(void)setTimeStamp:(struct WrdDocumentProperties *)arg0 ;
+(void)setupZIndices:(id)arg0 document:(id)arg1 escherType:(int)arg2 ;
-(id)applicationName;
-(id)init;


@end


#endif