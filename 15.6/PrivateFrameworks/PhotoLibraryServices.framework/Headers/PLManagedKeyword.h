// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLMANAGEDKEYWORD_H
#define PLMANAGEDKEYWORD_H

@class NSSet, NSString;


#import "PLManagedObject.h"

@interface PLManagedKeyword : PLManagedObject

@property (retain, nonatomic) NSSet *assetAttributes;
@property (retain, nonatomic) NSString *shortcut;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *uuid;


+(id)entityName;
+(id)keywordForTitle:(id)arg0 context:(id)arg1 ;
+(id)keywordForUuid:(id)arg0 context:(id)arg1 ;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg0 ;
-(void)awakeFromInsert;


@end


#endif