// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPFILENAMESMARTFIELD_H
#define TSWPFILENAMESMARTFIELD_H



#import "TSWPPlaceholderSmartField.h"

@interface TSWPFilenameSmartField : TSWPPlaceholderSmartField {
    unsigned int _displayFlags;
}


@property (nonatomic) unsigned int displayFlags;


-(BOOL)allowsPasteAsSmartField;
-(id)copyWithContext:(id)arg0 ;
-(unsigned short)smartFieldKind;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif