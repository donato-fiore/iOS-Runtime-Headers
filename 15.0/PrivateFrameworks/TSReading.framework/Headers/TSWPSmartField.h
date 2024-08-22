// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPSMARTFIELD_H
#define TSWPSMARTFIELD_H

@protocol TSKDocumentObject, TSPCopying;


#import "TSPObject.h"
#import "TSWPStorage.h"

@interface TSWPSmartField : TSPObject <TSKDocumentObject, TSPCopying>

 {
    NSUInteger _lastTableIndex;
}


@property (readonly, nonatomic) unsigned int attributeArrayKind;
@property (nonatomic) TSWPStorage *parentStorage; // ivar: _parentStorage
@property (readonly, nonatomic) _NSRange range;
@property (readonly, nonatomic) int styleAttributeArrayKind;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)defaultFieldStyleIdentifier;
-(BOOL)allowsEditing;
-(BOOL)allowsPasteAsSmartField;
-(BOOL)canCopy:(struct _NSRange )arg0 ;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)text;
-(int)elementKind;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)dealloc;
-(void)wasAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif