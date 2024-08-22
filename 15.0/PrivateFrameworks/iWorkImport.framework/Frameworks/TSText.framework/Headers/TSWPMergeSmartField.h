// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPMERGESMARTFIELD_H
#define TSWPMERGESMARTFIELD_H

@class NSString;


#import "TSWPPlaceholderSmartField.h"

@interface TSWPMergeSmartField : TSWPPlaceholderSmartField {
    NSString *_property;
    NSString *_label;
    NSString *_key;
    int _category;
    BOOL _requiresFollowingWhitespace;
    NSString *_whitespace;
    NSString *_guid;
    NSString *_tableField;
}


@property (nonatomic) int category;
@property (copy, nonatomic) NSString *guid;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *property;
@property (nonatomic) BOOL requiresFollowingWhitespace;
@property (copy, nonatomic) NSString *tableField;
@property (copy, nonatomic) NSString *whitespace;


-(BOOL)allowsPasteAsSmartField;
-(id)copyWithContext:(id)arg0 ;
-(id)scriptTag;
-(unsigned short)smartFieldKind;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif