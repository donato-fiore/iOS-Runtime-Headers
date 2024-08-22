// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPCITATIONSMARTFIELD_H
#define TSWPCITATIONSMARTFIELD_H

@class NSArray, NSString;
@protocol TSWPCitationRecordHosting, TSWPCitationSmartFieldEditing;


#import "TSWPSmartField.h"

@interface TSWPCitationSmartField : TSWPSmartField <TSWPCitationRecordHosting>

 {
    NSArray *_citationRecords;
    BOOL _isLocalizable;
}


@property (copy, nonatomic) NSArray *citationRecords;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSObject<TSWPCitationSmartFieldEditing> *editingDelegate; // ivar: _editingDelegate
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLocalizable;
@property (readonly) Class superclass;


+(BOOL)isValidCitationField:(id)arg0 ;
-(BOOL)supportsDeepCopyForUndo;
-(id)bibliographySmartField;
-(id)copyWithContext:(id)arg0 ;
-(unsigned short)smartFieldKind;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif