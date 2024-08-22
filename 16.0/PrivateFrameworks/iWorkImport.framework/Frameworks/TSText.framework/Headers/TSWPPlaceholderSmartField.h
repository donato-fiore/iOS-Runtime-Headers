// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPPLACEHOLDERSMARTFIELD_H
#define TSWPPLACEHOLDERSMARTFIELD_H

@class NSString;


#import "TSWPSmartField.h"

@interface TSWPPlaceholderSmartField : TSWPSmartField {
    BOOL _localizable;
    NSString *_scriptTag;
}


@property (nonatomic) BOOL isLocalizable;
@property (copy, nonatomic) NSString *scriptTag;


-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(unsigned short)smartFieldKind;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif