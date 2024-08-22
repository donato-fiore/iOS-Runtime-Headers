// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OCXSTATE_H
#define OCXSTATE_H


#import <Foundation/Foundation.h>

#import "CXNamespace.h"

@interface OCXState : NSObject

@property (retain, nonatomic) CXNamespace *OCXDrawingNamespace; // ivar: mOCXDrawingNamespace
@property (retain, nonatomic) CXNamespace *OCXRelationshipsNamespace; // ivar: mOCXRelationshipsNamespace
@property (readonly, nonatomic) int xmlFormat; // ivar: mXMLFormat


-(id)OCXCommentAuthorsRelationshipType;
-(id)OCXCommentsExtendedRelationshipType;
-(id)OCXCommentsRelationshipType;
-(id)OCXCustomXmlRelationshipType;
-(id)OCXDrawingRelationshipType;
-(id)OCXEndnotesRelationshipType;
-(id)OCXFontTableRelationshipType;
-(id)OCXFootnotesRelationshipType;
-(id)OCXLegacyDocTextInfoRelationshipType;
-(id)OCXNotesMasterRelationshipType;
-(id)OCXNotesSlideRelationshipType;
-(id)OCXNumberingRelationshipType;
-(id)OCXPackagePresPropsRelationshipType;
-(id)OCXPackageViewPropsRelationshipType;
-(id)OCXPivotTableRelationshipType;
-(id)OCXSettingsRelationshipType;
-(id)OCXSharedStringsRelationshipType;
-(id)OCXSlideLayoutRelationshipType;
-(id)OCXSlideMasterRelationshipType;
-(id)OCXSlideRelationshipType;
-(id)OCXStylesRelationshipType;
-(id)OCXTableRelationshipType;
-(id)OCXTableStylesRelationshipType;
-(id)OCXThemeOverrideRelationshipType;
-(id)OCXThemeRelationshipType;
-(id)OCXVmlDrawingRelationshipType;
-(id)init;
-(void)setupNSForXMLFormat:(int)arg0 ;


@end


#endif