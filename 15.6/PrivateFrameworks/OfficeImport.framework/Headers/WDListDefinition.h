// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDLISTDEFINITION_H
#define WDLISTDEFINITION_H

@class NSMutableArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "WDDocument.h"

@interface WDListDefinition : NSObject <NSCopying>

 {
    WDDocument *mDocument;
    int mType;
    NSMutableArray *mLevels;
}


@property (readonly, nonatomic) int listDefinitionId; // ivar: mListDefinitionId
@property (readonly, nonatomic) NSString *styleId; // ivar: mStyleId
@property (copy, nonatomic) NSString *styleRefId; // ivar: mStyleRefId


-(id)addLevel;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDocument:(id)arg0 listDefinitionId:(int)arg1 styleId:(id)arg2 ;
-(id)levelAt:(int)arg0 ;
-(int)levelCount;
-(int)type;
-(void)removeLastLevel;
-(void)setType:(int)arg0 ;


@end


#endif